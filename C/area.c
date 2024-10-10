#include<stdio.h>

int main () {
    double pi = 3.14;
    int radius;
    float area;

    printf("Enter a radius: ");
    scanf("%d", &radius);

    area = pi * radius * radius;
    printf("The area of circle is %lf\n", area);
   
    return 0; 
}