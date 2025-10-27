#include <stdio.h>

int marks_summation(int marks[], int number_of_students, char gender) {
    int sum = 0;
    int start_index;

    // Boys have even indices (0, 2, 4...), Girls have odd indices (1, 3, 5...)
    if (gender == 'b')
        start_index = 0;
    else
        start_index = 1;
    for (int i = start_index; i < number_of_students; i += 2) {
        sum += marks[i];
    }

    return sum;
}

int main() {
    int number_of_students;
    scanf("%d", &number_of_students);

    int marks[number_of_students];
    for (int i = 0; i < number_of_students; i++) {
        scanf("%d", &marks[i]);
    }

    char gender;
    scanf(" %c", &gender);  // notice space before %c to consume newline

    int result = marks_summation(marks, number_of_students, gender);
    printf("%d", result);

    return 0;
}

