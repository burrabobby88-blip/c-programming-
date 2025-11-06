#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

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

/* ------------------- FUNCTION IMPLEMENTATIONS ------------------- */

// split sentence into words
struct sentence get_sentence(char* text) {
    struct sentence sen;
    sen.data = malloc(1001 * sizeof(struct word));
    sen.word_count = 0;

    char* token = strtok(text, " ");
    while (token != NULL) {
        sen.data[sen.word_count].data = token;
        sen.word_count++;
        token = strtok(NULL, " ");
    }
    return sen;
}

// split paragraph into sentences
struct paragraph get_paragraph(char* text) {
    struct paragraph para;
    para.data = malloc(1001 * sizeof(struct sentence));
    para.sentence_count = 0;

    char* token = strtok(text, ".");
    while (token != NULL) {
        para.data[para.sentence_count] = get_sentence(token);
        para.sentence_count++;
        token = strtok(NULL, ".");
    }
    return para;
}

// split document into paragraphs
struct document get_document(char* text) {
    struct document doc;
    doc.data = malloc(6 * sizeof(struct paragraph));
    doc.paragraph_count = 0;

    char* token = strtok(text, "\n");
    while (token != NULL) {
        doc.data[doc.paragraph_count] = get_paragraph(token);
        doc.paragraph_count++;
        token = strtok(NULL, "\n");
    }
    return doc;
}

/* ------------------- QUERY FUNCTIONS ------------------- */

struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n) {
    return Doc.data[n - 1].data[m - 1].data[k - 1];
}

struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m) {
    return Doc.data[m - 1].data[k - 1];
}

struct paragraph kth_paragraph(struct document Doc, int k) {
    return Doc.data[k - 1];
}

/* ------------------- PRINT FUNCTIONS ------------------- */

void print_word(struct word w) {
    printf("%s", w.data);
}

void print_sentence(struct sentence sen) {
    for (int i = 0; i < sen.word_count; i++) {
        print_word(sen.data[i]);
        if (i != sen.word_count - 1)
            printf(" ");
    }
}

void print_paragraph(struct paragraph para) {
    for (int i = 0; i < para.sentence_count; i++) {
        print_sentence(para.data[i]);
        printf(".");
    }
}

void print_document(struct document doc) {
    for (int i = 0; i < doc.paragraph_count; i++) {
        print_paragraph(doc.data[i]);
        if (i != doc.paragraph_count - 1)
            printf("\n");
    }
}

/* ------------------- INPUT HANDLER ------------------- */

char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen(doc) + 1) * sizeof(char));
    strcpy(returnDoc, doc);
    return returnDoc;
}

/* ------------------- MAIN ------------------- */

int main() {
    char* text = get_input_text();
    struct document Doc = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3) {
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            struct word w = kth_word_in_mth_sentence_of_nth_paragraph(Doc, k, m, n);
            print_word(w);
        } else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            struct sentence sen = kth_sentence_in_mth_paragraph(Doc, k, m);
            print_sentence(sen);
        } else {
            int k;
            scanf("%d", &k);
            struct paragraph para = kth_paragraph(Doc, k);
            print_paragraph(para);
        }
        printf("\n");
    }
}

