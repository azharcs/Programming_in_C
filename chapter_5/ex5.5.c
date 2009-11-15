#include <stdio.h>
int main (void)
{

int n, n2 = 1;

printf ("TABLE OF POWERS OF TWO \n\n");
printf ("  n    2 to the n \n");
printf ("----  ------------ \n");

for (n=1; n <= 10; n++){
	n2 = n * 2;
	printf(" %2i       %i\n",n, n2);
}
return 0;
}
