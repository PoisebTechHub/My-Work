#include <stdio.h>

/**
 * location- determine the addresses of the variables
 *
 * return is always 0
 */
int main ()
{
	char c;
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("Address of variable c is %p\n", &c);
	printf("Address of varibale n is %p\n", &n);
	printf("Value of n is %d\n", n);
	printf("Address of n is %p\n", &n);
	printf("Value of p is %p\n", p);
	return (0);
}
