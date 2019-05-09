#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	int i, l, n;
	printf("Enter a string");
	scanf("%s", s);
	i = s[0];
	s[0] = s[6];
	s[6] = i;
	l = s[1];
	s[1] = s[5];
	s[5] = l;
	n = s[2];
	s[2] = s[4];
	s[4] = n;


	printf("%s", s);
	return 0;

}