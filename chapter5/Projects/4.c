#include <stdio.h> 
int main(void)
{
    int num;

    printf("Please enter the wind speed: ");
    scanf("%d", &num);

    if (num < 1) 
        printf("Calm");
    else if (num >= 1 && num <= 3)
        printf("Light air");
    else if (num >= 4 && num <= 27)
        printf("Breeze");
    else if (num >= 28 && num <= 47)
        printf("Gale");
    else if (num >= 48 && num <= 63)
        printf("Storm");
    else if (num > 63) 
        printf("Hurricane");
   
    return 0;
}
