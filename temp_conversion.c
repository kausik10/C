#include<stdio.h>
#include<math.h>
int main()
{
	float celcius, farenheit, r;
	printf("Enter temperature in Degree Celcius: ");
	scanf("%f", &celcius);
	farenheit = (9 * celcius + 160) / 5;
	//r = roundf(farenheit * 100)/100;
	printf("The temperaure in degree farenheit is: %.2f\n", farenheit);
	return 0;	
}
