#include <stdio.h>
int main (void)
{

float value1, value2;

printf ("Enter two numbers to be divided \n");
scanf ("%f %f", &value1, &value2);

if (value2 == 0)
	printf ("Error - Division by Zero\n");
else
	printf("%.3f\n", value1 / value2);

return 0;
}
