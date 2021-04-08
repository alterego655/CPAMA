#include <stdio.h> 

int main(void) 
{
    int grade, ten_digit;
  
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    
    ten_digit = grade / 10;

    printf("Letter grade: ");
    switch(ten_digit) {
        case 10: case 9: printf("A"); break;
        case 8: printf("B"); break;
        case 7: printf("C"); break;
        case 6: printf("D"); break;
        default : printf("Failed"); break;
    }
    return 0;
}
