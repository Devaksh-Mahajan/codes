#include <stdio.h>
int main()
{
	int i, n, sum=0;
	printf("Enter the value of n");
	scanf("%d", &n);
	for(i=1;i<=10;i++)
		sum = sum + 2*i;
	printf("%d", sum);
	return 0;

}