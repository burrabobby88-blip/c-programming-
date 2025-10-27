#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;
};

struct paragraph {
    struct sentence* data;
    int sentence_count;
};

struct document {
    struct paragraph* data;
    int paragraph_count;
};

// ----------- Utility function to split string by a delimiter -----------
char** split(char* text, const char* delimiter, int* count) {
    char* token = strtok(text, delimiter);
    char** result = NULL;
    *count = 0;

    while (token != NULL) {
        result = realloc(result, sizeof(char*) * (++(*count)));
        result[*count - 1] = token;
        token = strtok(NULL, delimiter);
    }
    return result;
}

// ----------- Global document variable -----------
struct document Doc;

// ----------- Convert raw text into structured document -----------
struct document get_document(char* text) {
    struct document d;
    int para_count;
    char** paragraphs = split(text, "\n", &para_count);

    d.paragraph_count = para_count;
    d.data = malloc(para_count * sizeof(struct paragraph));

    for (int i = 0; i < para_count; i++) {
        int sentence_count;
        char** sentences = split(paragraphs[i], ".", &sentence_count);

        d.data[i].sentence_count = sentence_count;
        d.data[i].data = malloc(sentence_count * sizeof(struct sentence));

        for (int j = 0; j < sentence_count; j++) {
            int word_count;
            char** words = split(sentences[j], " ", &word_count);

            d.data[i].data[j].word_count = word_count;
            d.data[i].data[j].data = malloc(word_count * sizeof(struct word));

            for (int k = 0; k < word_count; k++) {
                d.data[i].data[j].data[k].data = words[k];
            }
        }
    }
    return d;
}

// ----------- Helper Access Functions -----------
struct paragraph nth_paragraph(struct document d, int n) {
    return d.data[n - 1];
}

struct sentence mth_sentence_in_nth_paragraph(struct document d, int m, int n) {
    return d.data[n - 1].data[m - 1];
}

struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document d, int k, int m, int n) {
    return d.data[n - 1].data[m - 1].data[k - 1];
}

// ----------- Print Functions -----------
void print_word(struct word w) {
    printf("%s", w.data);
}

void print_sentence(struct sentence s) {
    for (int i = 0; i < s.word_count; i++) {
        printf("%s", s.data[i].data);
        if (i != s.word_count - 1)
            printf(" ");
    }
}

void print_paragraph(struct paragraph p) {
    for (int i = 0; i < p.sentence_count; i++) {
        print_sentence(p.data[i]);
        if (i != p.sentence_count - 1)
            printf(".");
    }
}

// ----------- Main Function -----------
int main() {
    int n;
    scanf("%d", &n);
    getchar(); // consume newline

    char document_text[5000] = "";
    char paragraph[1000];

    for (int i = 0; i < n; i++) {
        fgets(paragraph, 1000, stdin);
        paragraph[strcspn(paragraph, "\n")] = 0; // remove newline
        strcat(document_text, paragraph);
        if (i != n - 1)
            strcat(document_text, "\n");
    }

    Doc = get_document(document_text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3) {
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            print_word(kth_word_in_mth_sentence_of_nth_paragraph(Doc, k, m, n));
        } else if (type == 2) {
            int m, n;
            scanf("%d %d", &m, &n);
            print_sentence(mth_sentence_in_nth_paragraph(Doc, m, n));
        } else if (type == 1) {
            int n;
            scanf("%d", &n);
            print_paragraph(nth_paragraph(Doc, n));
        }
        printf("\n");
    }
    return 0;
}

