#include <stdio.h>

int main(void) {

    float loan = 0.0f, rate = 0.0f, payment = 0.0f; 
    int number = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter amount of rate: ");
    scanf("%f", &rate);

    printf("Enter amount of payment: ");
    scanf("%f", &payment);

    printf("Enter the number of payments: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        loan = loan - payment + (loan * rate / 100.0 / 12);
        printf("Balance remaining after %d payment: $%.2f\n", i, loan);

    }     
    return 0;
}
