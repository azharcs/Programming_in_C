/* for statement and while statement can be interchanged

-- for statement: 
for ( init_expression; loop_condition; loop_expression)
	program_statement

can be interchanged to

-- while statement:
 
init_expression;
while ( loop_condition)
program_statement
loop_expression;

and Vice-Versa */

#include <stdio.h>
int main (void)
{

int n, number, triangularNumber, counter;

counter = 1;
while ( counter <= 5) { 
	printf ("What Triangular Number do you want? \n");
	scanf ("%i", &number);
 	counter++;

triangularNumber = 0;

	n = 1;
	while ( n <= number) {
		triangularNumber += n;
		n++;
}
printf ("TriangularNumber %i is %i\n\n", number, triangularNumber);

}
return 0;
}
