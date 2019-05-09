#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){

	double x;
	double g = 1.0;
	double error;
	//printf("Initial value of g is %.10lf\n", g);
	printf("Enter the value of x: \n");
	scanf("%lf", &x);
	printf("Value of x is %.10lf\n", x);
	error = fabs(g*g-x);
	while (error > .000001){
		//printf("Entering while loop\n");
		g = (g+(x/g))/2.0;
		error = fabs(g*g - x);
		printf("Value of g is %.10lf\n", g);
		printf("Value of difference is %.10lf\n",error);
	}
	printf("%.14lf\n", g);
	return 0;
}
