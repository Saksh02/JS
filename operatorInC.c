#include <stdio.h>

int main ()
{
	int a, b;
	int sum, diff, div, product;

	printf("Enter a number: ", a);
	scanf("%d", &a);

	printf("Enter another number: ", b);
	scanf("%d", &b);

	sum = a + b;
	printf("%d + %d = %d\n", a,b,sum);

	diff = a - b;
	printf("%d - %d = %d\n", a,b,diff);

	div = a / b;
	printf("%d / %d = %d\n", a,b,div);

	product = a * b;
	printf("%d * %d = %d\n", a,b,product);

	return 0;
}
