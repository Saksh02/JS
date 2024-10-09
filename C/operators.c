#include<stdio.h>

int main () {
    int a,b, sum, diff, div, mult;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum of %d and %d is %d\n", a,b,sum);

    diff = a - b;
    printf("Difference between %d and %d is %d\n", a,b,diff);

    div = a / b;
    printf("Division of %d and %d is %d\n");

    mult = a * b;
    printf("Multiplication of %d and %d is %d\n", a,b,mult);

    return 0;
}