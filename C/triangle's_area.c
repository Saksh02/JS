#include<stdio.h>

int main () {
    float area;
    int base;
    int height;

    printf("Enter base of a triangle: ");
    scanf("%d",&base);
    printf("Enter height of a triangle: ");
    scanf("%d", &height);

    area = 0.5 * base * height;
    printf("Area of triangle is: %lf square centimeters\n", area);
    return 0;
}