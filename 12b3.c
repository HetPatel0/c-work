#include <stdio.h>

// Function to calculate and print Pascal's Triangle
void printPascalsTriangle(int n) {
    int i, j, coef;

    for (i = 0; i < n; i++) {
        // Print spaces for alignment
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }

        // Initialize the coefficient to 1 for the first element in each row
        coef = 1;

        // Print the coefficients in the current row
        for (j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        // Move to the next row
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    printPascalsTriangle(n);

    return 0;
}
