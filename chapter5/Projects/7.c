#include <stdio.h>

int main(void) 
{
    int num1, num2, num3, num4, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 < num2) {
        largest = num2;
        smallest = num1;
    }
    else {
        largest = num1;
        smallest = num2;
    }

    if (num3 < largest) {
        largest = largest;
        if (num3 < smallest) {
            smallest = num3;}
        else { 
            smallest = smallest;}
    }
    else {
        largest = num3;
    }
 
    if (num4 > smallest && num4 < largest) {
        smallest = smallest;
        largest = largest;}
    else if (num4 < smallest) {
        smallest = num4;}
    else if (num4 > largest) {
        largest = num4;
    }

    printf("Largest: %d, Smallest: %d", largest, smallest);
    
    return 0;
}
