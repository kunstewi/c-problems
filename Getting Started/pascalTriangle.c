// write a program to produce the pascal triangle using numbers from 1 to 10.

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows = 10;
    printf("Pascal's Triangle with %d rows:\n", rows);
    printPascalsTriangle(rows);
    return 0;
}