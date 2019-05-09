#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, D, x, l;
	printf("Enter coefficient of x^2");
	scanf("%d", &a);
	printf("\n");
	printf("Enter coefficient of x");
	scanf("%d", &b);
	printf("\n");
	printf("Enter a constant term");
	scanf("%d", &c);
	printf("\n");
	D = (b*b - 4*a*c);
	printf(" Discriminant is %d\n", D);
	if(D<0)
		{printf("No roots\n");}

	if(D==0)
		printf("Equal roots\n");
	if(D>0)
		printf("Distinct roots\n");
	printf("Roots of equation are\n");
	x = (-b + sqrt(D))/2*a;
	printf("%d", x);
	l = (-b - sqrt(D))/2*a;
	printf("%d", l);
	return 0;



}