#include <stdio.h>

int main(void) 
{
    float income;
    
    printf("Please enter the income: ");
    scanf("%f", &income);

    if (income < 750) 
        printf("tax: %.2f", income * .01);
    else if (income >= 750 && income <= 2250)
        printf("tax: %.2f", 7.5 + .02 * (income - 750));
    else if (income > 2250 && income <= 3750)
        printf("tax: %.2f", 37.5 + .03 * (income - 2250));
    else if (income > 3750 && income <= 5250)
        printf("tax: %.2f", 82.5 + .04 * (income - 3750));
    else if (income > 5250 && income <= 7000)
        printf("tax: %.2f", 142.5 + .05 * (income - 5250));
    else if (income > 7000)
        printf("tax: %.2f", 230 + .06 * (income - 7000));
    return 0;
}
        
