#include <stdio.h>

int marks_summation(int marks[], int number_of_students, char gender) {
    int sum = 0;
    int start_index;
    int i;  // ? declare here (outside for loop)

    if (gender == 'b')
        start_index = 0;
    else
        start_index = 1;

    for (i = start_index; i < number_of_students; i += 2) {
        sum += marks[i];
    }

    return sum;
}

int main() {
    int number_of_students;
    int i;  // ? declare here

    scanf("%d", &number_of_students);

    int marks[number_of_students];
    for (i = 0; i < number_of_students; i++) {
        scanf("%d", &marks[i]);
    }

    char gender;
    scanf(" %c", &gender);

    int result = marks_summation(marks, number_of_students, gender);
    printf("%d", result);

    return 0;
}

