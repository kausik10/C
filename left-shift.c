#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter a number A: ");
	scanf("%d", &a);
	printf("Enter another number B: ");
	scanf("%d", &b);
	//printf("The result of bitwise AND(&) operator is: %d\n",a & b);
	
	printf("The result of bitwise left shift (<<) operation: %d << 1 is: %d\n", a, a << 1);
	printf("The result of bitwise right shift (>>) operation: %d >> 1 is: %d\n", b, b >> 1);
	
	return 0;
}
