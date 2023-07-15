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
			printf("is positive");
		} else if (n==0){
			 printf("is zero");
		} else {
			 printf("is negative");
		}
		return (0);
}
