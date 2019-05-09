#include <stdio.h>
int main()
{
	int s, c, k, j;
	printf("Enter the value of cost price and selling price");
	scanf("%d %d", &c, &s);
	if(s>c)
	{
		printf("Profit is there\n");
		k = s-c;
		printf("Profit is %d", k);
	}
	else
	{
		printf("Loss is there\n");
		j = c-s;
		printf("Loss is %d", j);
	}
	return 0;
}