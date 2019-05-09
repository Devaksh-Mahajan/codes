#include <stdio.h>
int main()
{
	int a, i, p=1;
	printf("Enter a number");
	scanf("%d", &a);
	for(i=a;i>=1;i--)
		p = p*i;
	printf("factorial is %d", p);
	return 0;
	
}