#include <stdio.h>
int main(){
	int i, t1 = 0, t2 = 1, n, nt;
	printf("Fibonacci series is:");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		nt = t1+t2;
		t1 = t2;
		t2 = nt;
	}
    printf("%d", t2);
	return 0;


}