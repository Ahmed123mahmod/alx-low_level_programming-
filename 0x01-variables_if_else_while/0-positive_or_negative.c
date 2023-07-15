#include <stdio.h>

/**
 * main - positive negative
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;
	printf("what is the number? \n");
	scanf("%d",&n);
		if(n > 0){
			printf("%d is positive",n);
		} else if (n == 0){
			 printf("%d is zero",n);
		} else {
			 printf("%d is negative",n);
		}
		return (0);
}
