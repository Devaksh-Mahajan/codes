#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number");
	scanf("%d", &a);
	if(a%5==0)
		printf("Number is divisible by 5");
	else
		printf("Number is not divisible by 5");
	return 0;
}