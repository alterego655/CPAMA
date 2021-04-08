#include <stdio.h>

int main(void)
{
    short i;
    int  n;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
        
    for (i = 1; i <= n; i++)
        printf("%10hd%10hd\n", i, i * i);
    
    return 0;
}

/*
 * The maximum value of integer type 'int' is 2147483647.
 * The square of the value is 46340.95...
 * The maximum value of integer type 'long' is 9,223,372,036,854,775,807,
 * The square of the value is 3,037,000,499.9760.
 * Maximum value for a variable of type short is 32767, the square of which is  
 */
