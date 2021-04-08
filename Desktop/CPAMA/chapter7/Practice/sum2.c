/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int main(void)
{
    short int n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%hd", &n);
    while (n != 0) {
        sum += n;
        scanf("%hd", &n);
    }
    printf("The sum is: %hd\n", sum);
    
    return 0;
}
