#include <stdio.h>
void _Float () {
    float number1 = 13.5;
    float number2 = 12.4;

    printf("Number 1 = %.2f\n", number1);
    printf("Number 2 = %.2f\n", number2);
}

void _Scanf() {
    int a;
    float b;

    printf("Enter integer and then a float: ");
    scanf("%d%f", &a, &b);

    printf("You entered %d and %f", a, b);
}

void main () {
    _Float();
}