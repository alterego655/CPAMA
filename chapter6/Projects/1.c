#include <stdio.h>

int main(void) 
{
    float max, num;
    
    printf("Enter a number: ");
    scanf("%f", &num);
    
    max = num;
 
    while (num > 0) {
        printf("Enter a number: ");
        scanf("%f", &num);
        
        if (num > max) 
            max = num;
        else 
            max = max;
    }
 
    printf("The largest number entered was %f", max);

    return 0;
}        
