#include<stdio.h>
int main(void) {
     float amount, taxed_amount;
     float tax = 0.05;
     printf("Enter an amount: ");
     scanf("%f", &amount);
     taxed_amount = amount + amount * tax;
     printf("With tax added: $%.2f\n", taxed_amount);

     return 0;
}
