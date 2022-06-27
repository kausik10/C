#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter a number A: ");
	scanf("%d", &a);
	printf("Enter another number B: ");
	scanf("%d", &b);
	printf("The value of ++a is: %d\n", ++a);
	printf("The result of b++ is: %d\n", b++);
	printf("The result of increased B is: %d\n", b);
	return 0;
}
