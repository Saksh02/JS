#include <stdio.h>

int main ()
{
	int radius;
	double area;

	printf("Enter radius: \n");
	scanf("%d", &radius);

	area = 0.5 * (radius * radius);
	printf("Area of triangle is:"%lf"" ,area);

	return 0;

}
