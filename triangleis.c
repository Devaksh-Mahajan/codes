#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter three sides of a triangle");
	scanf("%d %d %d", &a, &b, &c);
	if(a==b==c)
	{
		printf("Triangle is equlateral");
	}
	if(a!=b!=c)
	{
		printf("It is scalene");
	}
	if(a=b&&a!=c)
	{
		printf("It is isosceles");
	}
	if(a=c&&a!=b)
	{
		printf("It is isosceles");
	}
	return 0;

}