#include <stdio.h>

int main(void)
{
    int num, i;
   
    printf("Please enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        else {
            continue;
        }
    }
    return 0;
} 
