#include <stdio.h>
#include <math.h>
int main()
{
	int x, y, r, l;
	printf("Enter the coordinates");
	scanf("%d %d", &x, &y);
	r = sqrt(x*x + y*y);
	l = atan(y/x);
	printf("Polar coordinates are %d %d", r, l);
	return 0;
}