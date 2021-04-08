#include <stdio.h>

int main(void) 
{
    int n, m;
    
    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    printf("The reversal is: ");

    do {
        m = m % 10; 
        n = n / 10;
        printf("%d", m);
    } while (n > 0);
    
    return 0;
}
        
