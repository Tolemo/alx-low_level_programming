#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entery point
 *
 * Return:always return 0
 */
int main(void)
 {
	 int n;

	 strand(time(0));
	 n = rand() - RAND_MAX / 2;
	 if (n < 0)
	 {
		 printf("%d is negetive\n", n);
	 } else if (n == 0)
	 {
		 printf("%d is zero\n", n);
	 } else 
	 {
		 printf("%d is negetive\n", n);
	 }
	 return (0);
 }

	            
	
