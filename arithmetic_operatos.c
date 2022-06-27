#include<stdio.h>
#include<math.h>
int main()
{
	{
	int a, b;
	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);
	printf("The sum of two numbers is: %d + %d = %d\n",a,b, a + b);
	printf("The difference of two numbers is: %d - %d = %d\n",a, b, a - b);
	printf("The product of two numbers is: %d * %d = %d\n",a,b, a * b);
	printf("The division of two numbers is: %d / %d = %d\n",a,b, a / b);
	printf("The modulous of two numbers is: %d mod %d = %d\n\n",a,b, a % b);
	}
	{
	float c, d;
	printf("Enter two numbers: \n");
	scanf("%f %f", &c, &d);
	printf("The sum of two numbers is: %f + %f = %f\n",c,d, c + d);
	printf("The difference of two numbers is: %f - %f = %f\n",c, d, c - d);
	printf("The product of two numbers is: %f * %f = %f\n",c,d,c * d);
	printf("The division of two numbers is: %f / %f = %f\n",c,d, c / d);
	printf("The modulous of two numbers is: %f mod %f = %f\n\n",c,d, remainder(c, d));
	}
	return 0;
}

