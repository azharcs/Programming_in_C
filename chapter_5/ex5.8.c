#include <stdio.h>
int main (void)
{

int n, number, TriangularNumber, counter, counter_num;

printf ("Enter the number of counts\n");
scanf ("%i", &counter_num);

for (counter=1; counter <= counter_num; counter++) {
        printf ("What Triangular Number do you want? ");
        scanf ("%i", &number);

        TriangularNumber = 0;

        for (n=1; n <= number; n++)
        TriangularNumber += n;

printf (" The triangular number for %i is %i \n", number, TriangularNumber);
}

return 0;
}

