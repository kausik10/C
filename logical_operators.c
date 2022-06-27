#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("The operation of logical AND operator(&) is: %d & %d = %d", a, b, a & b);
	printf("\nThe operation of logical OR operator(|) is: %d | %d = %d", a, b, a | b);
	printf("\nTHe operation of logical XOR operator(^) is: %d ^ %d = %d\n", a, b, a ^ b);
	return 0;
}
