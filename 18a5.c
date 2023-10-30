#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x,y;
    printf("Enter number1:");
    scanf("%d",&x);
    printf("Enter number2:");
    scanf("%d",&y);

    swap(&x, &y);

    printf("After swapping: num1 = %d, num2 = %d\n", x,y);

    return 0;
}