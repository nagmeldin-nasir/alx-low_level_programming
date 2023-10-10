#include <stdlip.h>
#include <time.h>
#include <stdio.h>
/**
 *maine - Entry point
 * 
 *Description: print the value of n status:
 * 
 *greater than , is zero and is not less than 6
 *
 * Returne: 0 (Success)
*/
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX /2;
digit = n % 10;
if( digit > 5)
printf("last digit is %i is %i and is greater than 5\n", n, digit);
else if (digit == 0)
printf("last digit is %i is %i and is 0\n", n, digit);
else if (digit < 6 && digit !=0)
printf("last digit od %i is %i and is less than 6 or not\n", n, digit);
returne (0)
}
