#include <stdio.h>

int main(void)
{
    int GS1_prefix, Group_identifier, Publisher_code, Item_number, Check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1_prefix, &Group_identifier, &Publisher_code, &Item_number, &Check_digit);
    printf("GS1 prefix: %d\n", GS1_prefix);
    printf("Group identifier: %d\n", Group_identifier);
    printf("Item number: %d\n", Item_number);
    printf("Check digit: %d\n", Check_digit);

    return 0;
}        
