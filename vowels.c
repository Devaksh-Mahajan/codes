#include <stdio.h>
int main()
{
	char s[50], v[] = "aeiouAEIOU";
	int i, j, count=0;
	printf("Enter a string");
	scanf("%s", &s);
	for(i=0;s[i];i++)
	{
		for(j=0;v[j];j++)
		{
			if(s[i]==v[j])
			{
				count ++;
			}
		}
	}
	printf("Total vowels of %s are %d", s, count);
	return 0;
	
}