#include <stdio.h>
int factorial (int n)
{
	if (n == 0 || n == 1)
		return 1;
	else 
		return n * factorial (n - 1);
}
int main (void)
{

	int fact;
	fact =  factorial (6);
	printf ("Factorial of 6 \n ");
	printf("6 ! is %d \n ", fact);
	return 0;
}



