#include <stdio.h>
int main (void)
{

int n, TriangularNumber;

printf ("TABLE OF TRIANGULAR NUMBERS \n");
printf ("n          Triangular Number \n");
printf ("-----     ------------------ \n");

TriangularNumber = 0;

for (n=1; n <= 10; ++n) {
        TriangularNumber += n;
printf ("%2i               %i   \n", n, TriangularNumber);
}
return 0;
}
