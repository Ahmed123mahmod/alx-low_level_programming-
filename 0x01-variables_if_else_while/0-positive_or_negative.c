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
		if(n>0){
			printf("number is positive");
		} else if (n==0){
			 printf("number is zero");
		} else {
			 printf("number is negative");
		}
}
