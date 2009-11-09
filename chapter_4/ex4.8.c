#include <stdio.h>
int main (void)
{

int i1 = 365, j1 = 7, i2 = 12258, j2 = 23, i3 = 996, j3 = 4;

printf ("The next largest even multiple for %i and %i is %i \n", i1, j1, i1 + j1 - i1 % j1);
printf ("The next largest even multiple for %i and %i is %i \n", i2, j2, i2 + j2 - i2 % j2);
printf ("The next largest even multiple for %i and %i is %i \n", i3, j3, i3 + j3 -i3 % j3);
return 0;
}
