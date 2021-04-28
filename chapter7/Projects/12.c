#include <stdio.h>
#include <ctype.h>

int main(void)
{
    double num = 0.0f, total = 0.0f;
    char c;

    printf("Enter an expression: ");
    scanf("%lf", &total);

    while ((c = getchar()) != '\n') {
        switch (c) {
            case '+':
                scanf("%lf", &num);
                total += num;
                break;
            case '-':
                scanf("%lf", &num);
                total -= num;
                break;
            case '*':
                scanf("%lf", &num);
                total *= num;
                break;
            case '/':
                scanf("%lf", &num);
                total /= num;
                break;
            default:
                break;
        }
    }
    
    printf("Value of expression: %f\n", total);
    return 0;
}
    
    
             
                

