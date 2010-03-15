#include <stdio.h>
int main (void)
{

int value1, value2;

printf ("Enter the two numbers \n");
scanf ("%i %i", &value1, &value2);

if (value1 % value2 == 0)
	printf ("The numbers %i and %i are divisible \n", value1, value2);
else
	printf ("The numbers %i and %i are not divisible \n", value1, value2);

return 0;
}
