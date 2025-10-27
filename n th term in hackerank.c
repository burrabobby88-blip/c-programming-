#include <stdio.h>

// Recursive function to find the nth term
int findNthTerm(int n, int a, int b, int c) {
    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else if (n == 3)
        return c;
    else
        return findNthTerm(n - 1, a, b, c) +
               findNthTerm(n - 2, a, b, c) +
               findNthTerm(n - 3, a, b, c);
}

int main() {
    int n, a, b, c;
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", findNthTerm(n, a, b, c));
    return 0;
}

