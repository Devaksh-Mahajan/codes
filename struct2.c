#include <stdio.h>
struct distance
{
	int meters;
	int kilo;

}d1, d2, sum;
int main()
{
	printf("Enter value of d1 in meters\n");
	scanf("%d", &d1.meters);
	printf("Enter value of d1 in kilometers\n");
	scanf("%d", &d1.kilo);
	printf("Enter value of d2 in meters\n");
	scanf("%d", &d2.meters);
	printf("Enter the value of d2 in kilos\n");
	scanf("%d", &d2.kilo);
	sum.meters = d1.meters + d2.kilo;
	sum.kilo = d1.kilo + d2.kilo;
	if(sum.meters>=1000)
	{
		sum.meters=sum.meters%1000;
		sum.kilo++;
	}
	printf("%d %d", sum.meters, sum.kilo);
	return 0;

}