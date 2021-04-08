#include <stdio.h>

int main(void)
{
    int x, poly;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    poly = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6; 
    printf("The result is: %d\n", poly);
  
    return 0;
} 
