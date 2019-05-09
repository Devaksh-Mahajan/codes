#include <stdio.h>
int main()
{
	float w, h;
	float b;
	printf("Enter the value of weight and height:");
	scanf("%f %f",&w, &h);
	b = w/h*h;
	printf("BMI of a person is %f\n", b);
	if(b<15)
		printf("Starvation");
	if(b>15.1&&b<=17.5)
		printf("Anorexic");
	if(b>17.6&&b<=18.5)
		printf("Underweight");
	if(b>18.6&&b<=24.9)
		printf("Ideal");
	if(b>25&&b<=25.9)
		printf("Overweight");
	if(b>30&&b<=30.9)
		printf("Obese");
	if(b>=40)
		printf("Morbidly Obese");
	return 0;
}