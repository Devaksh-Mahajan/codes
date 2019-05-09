#include <stdio.h>
#include <string.h>
int main()
{
	union student
	{
		int id;
		char name[20];
		int marks;
	}u;
	u.id = 50;
	strcpy(u.name, "aaa");
	printf("%d\n", u.id);
	printf("%c %c\n", u.name[0], u.name[1], u.name[2]);
	printf("%d", u.marks);
	return 0;
}