#include <stdio.h>

int main(void)
{
    int num, digit_1, digit_2;
   
    printf("Enter a two digit number: ");
    scanf("%d", &num);

    digit_1 = num / 10;
    digit_2 = num % 10;

    printf("You entered the number: ");

    if (num == 10) {
        printf("ten");
    }

    else if (num >= 20) {
  
        switch(digit_1) {
            case 2: 
                printf("twenty"); break;
            case 3:
                printf("thirty"); break;
            case 4:
                printf("forty"); break;
            case 5:
                printf("fifty"); break;
            case 6:
                printf("sixty"); break;
            case 7:
                printf("seventy"); break;
            case 8:
                printf("eighty"); break;
            case 9:
                printf("ninety"); break;
        }

        printf("-");
        
        switch(digit_2) {
            case 1 : printf("one"); break;
            case 2 : printf("two"); break;
            case 3 : printf("three"); break;
            case 4 : printf("four"); break;
            case 5 : printf("five"); break;
            case 6 : printf("six"); break;
            case 7 : printf("seven"); break;
            case 8 : printf("eight"); break;
            case 9 : printf("nine"); break;
        }
        
        return 0;
    }
}
