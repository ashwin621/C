Print multiplication table of a given number

#include <stdio.h>

int main()

{

int n, i;

printf ("Enter a number: ");

scanf ("%d", &n);

for ( i = 1; i <= 10 ;i++)

printf ("%d x %d = %d\n", n, i, n*i);

return 0;

}

Output:

Enter a number: 5

5 * 1 = 5

5 * 2 = 10

5 * 3 = 15

5 * 4 = 20

5 * 5 = 25

5 * 6 = 30

5 * 7 = 35

5 * 8 = 40

5 * 9 = 45

5 * 10 = 50
