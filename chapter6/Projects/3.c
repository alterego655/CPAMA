#include <stdio.h>

int main(void)
{
    int numerator, denominator, reminder, GCD, m, n;

    printf("Enter a fraction: ");
    scanf("%d / %d", &numerator, &denominator);

    n = numerator;
    m = denominator;

    if (n == 0) 
        GCD = m;
    
    while (n != 0) {
        reminder = m % n;
        m = n;
        n = reminder;
        if (n == 0)
            GCD = m;
        else
            continue;
    }
        
    numerator = numerator / GCD;
    denominator = denominator / GCD;

    printf("In lowest terms: %d/%d", numerator, denominator);

    return 0;
}
