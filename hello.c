#include <stdio.h>
/**
*pointers - dereferencing pointers of variables
*Return is always 0
*/

int main ()
{
	int n;
	int *p;
	char c;
	char *pp;

	c = 'H';
	pp = &c;
	n = 98;
	p = &n;
	printf("value of 'c' is %d (%c)\n", c, c);
	printf("Address of 'c' is %p\n", &c);
	printf("Value of pp is %p\n", pp);
	printf("Value of n is %d\n", n);
	printf("Address of n is %p\n", &n);
	printf("Value of p is %p\n", &n);
	return (0);
}