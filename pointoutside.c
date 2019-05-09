#include <stdio.h>
#include <math.h>
int main()
{
	int x, y, r, l, n, d;
	printf("Enter the value of radius :");
	scanf("%d", &r);
	printf("Enter the value of center points:\n");
	scanf("%d %d", &x, &y);
	printf("Enter the point :\n");
	scanf("%d %d", &l, &n);
	d = sqrt(pow((l-x), 2) + pow((n-y), 2));
	if(d<r)
	{
		printf("The point lies inside the circle");
	}
	if(d>r)
	{
		printf("The point lies outside the circle");
	}
	return 0;
	
}