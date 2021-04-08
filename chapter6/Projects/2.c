#include <stdio.h>
int main(void)
{
    int m, n, reminder;
    
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    if (n == 0)
        printf("Greatest common divisor: %d", m);
    
    while (n != 0) {
        reminder = m % n;
        m = n;
        n = reminder;
        if (n == 0)
            printf("Greatest common divisor: %d", m); 
        else
            continue; 
    }

    return 0;
}
    
            
