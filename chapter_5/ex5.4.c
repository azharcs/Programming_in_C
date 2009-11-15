#include <stdio.h>
int main (void)
{

int n, factorial = 1;

printf ("TEN FACTORIAL NUMBERS \n\n");
printf (" n       n!  \n");
printf ("-----  ------\n");

for (n=1; n<=10; n++){ 
	factorial = factorial * n;
 	printf(" %2i      %i \n",n, factorial);
}
return 0;
} 
