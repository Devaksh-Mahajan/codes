#include <stdio.h>
int main()
{
	int l, k, m, f, i;
	printf("Enter a distance between two cities in km\n");
	scanf("%d", &l);
	k = l*1000;
	printf("Converting into meters: %d\n", k);
	m = k*100;
	printf("Converting into centimeters: %d\n", m);
	f = l*3280.84;
	printf("Converting into feet: %d\n", f);
	i = l*39370.08;
	printf("Converting into inches: %d\n", i);
	return 0;
}