#include <stdio.h>

int main (void)
{

int dollars, cents, count;

for (count=1; count <= 10; count++) {
	printf ("Enter Dollars \n");
	scanf ("%i", &dollars);
	printf ("Enter Cents \n");
	scanf ("%i", &cents);
	printf ("$%i.%.2i\n\n", dollars, cents);
}
return 0;
}
