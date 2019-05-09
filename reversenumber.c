#include <stdio.h>
int main()
{
	int i, k, m, n, o, p, q, r, s, T;
	printf("Enter a five digit number");
	scanf("%d", &i);
	k = i%10;
	m = i/10;
	n = m%10;
	o = m/10;
	p = o%10;
	q = o/10;
	r = q%10;
	s = q/10;
	printf("Reversing a five digit number is %d%d%d%d%d", k, n, p, r, s);
	return 0;
}