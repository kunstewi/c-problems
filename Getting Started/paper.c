/*Paper of size A0 has dimensions 1189mm x 841mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides.
Thus paper of size A1 would have dimensions 841mm x 594mm. Write a program to calculate and print paper sizes to A8.*/

#include <stdio.h>

int main() {
    int width = 1189;
    int height = 841;

    printf("A0: %dmm x %dmm\n", width, height);

    for (int i = 1; i <= 8; i++) {
        if (width > height) {
            width /= 2;
        } else {
            height /= 2;
        }
        printf("A%d: %dmm x %dmm\n", i, width, height);
    }

    return 0;
}