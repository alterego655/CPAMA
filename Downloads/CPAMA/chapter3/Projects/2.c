#include<stdio.h>

int main(void)
{
    int item_number, year, month, day;
    float unit_price;
    
    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit_price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tprice\t\tDate\n");
    printf("%d\t\t$%6.2f\t\t%.2d/%.2d/%.4d", item_number, unit_price, month, day, year);

    return 0;
}
