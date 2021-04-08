#include <stdio.h>

int main(void)
{
    int i, n, ch;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        if (i % 24 == 0) {
            printf("%10d%10d\n", i, i * i);
            printf("Press Enter to continue...\n");
            ch = getchar();
            while (getchar() != '\n') {
                    getchar();
            }
        }
        else {
            printf("%10d%10d\n", i, i * i);
        }
    }
    return 0;
}
