#include <stdio.h>
int main()
{
	struct book
	{
		char name;
		float price;
		int pages;
	};
	struct book b1, b2, b3;
	printf("Enter the name, price and pages of the books 2 times\n");
	scanf("%c%f%d\n", &b1.name, &b1.price, &b1.pages);
	scanf("%c%f%d", &b2.name, &b2.price, &b2.pages);
	printf("You have answered\n");
	printf("%c %f% d\n", b1.name, b1.price, b1.pages);
	printf("%c %f %d\n", b2.name, b2.price, b2.pages);
	return 0;
}