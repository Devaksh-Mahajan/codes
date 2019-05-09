#include <stdio.h>
int main()
{
	int i, sum=0, n;
	printf("Enter the value of natural number");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		sum = sum + i*i ;
	printf("%d", sum);
	return 0;

}