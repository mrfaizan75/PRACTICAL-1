#include <stdio.h>

void swapReference(int *x, int *y) {
    int temp;
    *x = *y;
    *y = temp;
    printf("Inside swapReference - x: %d, y: %d\n", *x, *y);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);


    printf("Before swapreference - a: %d, b: %d\n", a, b);
    swapReference(&a, &b);
    printf("After swapReferece - a: %d, b: %d\n", a, b);

    return 0;
}
