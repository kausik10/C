#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	/**if (a > b)
	{
		int sum = a + b;
		printf("The sum of two numbers is: %d + %d = %d\n", a, b, sum);
	}
	else
	{
		int diff = a - b;
		printf("The difference of two numbes is: %d - %d = %d\n", a, b, diff);
	}
	**/
	a >= b ? 
	printf("The sum of two numbers is: %d + %d = %d\n",a, b, a + b):
	printf("The difference of two numbers is: %d - %d = %d", a, b, a - b);
	return 0;
}
