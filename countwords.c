#include <stdio.h>
int main()
{
	char s[200];
	int i, count = 0;
	printf("Enter a string");
	scanf("%[^\n]s", s);
	for(i=0;s[i]!='\0';i++) 
	{
		if(s[i] == ' ')
			count ++;
	}

	printf("Number of words are %d", count + 1);
	return 0;


}