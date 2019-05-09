#include <stdio.h>
#include <string.h>
int main()
{
	int l, i;
	char s[20];
	printf("Enter a string  ");
	scanf("%s", s);
	l = strlen(s);
	printf("%d\n", l);
	for(i=0;i<l/2;i++)
	{
		if(s[i] != s[l-i-1])
		{
			printf("Not a palindrome");
			
		}
		else
		{
			printf("Palindrome");
		}
	}
	
	return 0;


}