#include <stdio.h>
int main (void)
{

int n, square_num = 0;

printf ("TABLE OF SQUARE NUMBERS FROM 1 to 10 \n");
printf ("  n         n^2 \n");
printf ("------    -------- \n");

for (n=1; n <= 10; n++) {
	square_num = n*n;
	printf (" %2i         %i\n", n, square_num);
}
return 0;
}
