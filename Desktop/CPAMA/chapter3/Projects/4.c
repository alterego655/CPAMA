#include<stdio.h>

int main(void) {
    
    int first_three, middle_three, last_four; 

    printf("Enter the number [(xxx) xxx-xxxx]: ");
    
    scanf("(%d) %d-%d", &first_three, &middle_three, &last_four);

    printf("You entered %d.%d.%d", first_three, middle_three, last_four);

    return 0;
}     
