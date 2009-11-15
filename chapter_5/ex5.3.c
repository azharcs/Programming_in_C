#include<stdio.h>
int main (void)
{

int n, triangularNumber = 0;

printf ("THE TABLE OF TRIANGLE NUMBERS \n\n");
printf ("  n       Triangle numbers \n");
printf ("------   ------------------ \n");

for (n=5; n<=50; n=n+5) {
	triangularNumber = (n*(n+1))/2;
	printf (" %2i          %i \n", n, triangularNumber);
}
return 0;
}
