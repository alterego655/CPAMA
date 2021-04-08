#include<stdio.h>

int main(void) {

    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;

    printf("Enter the numbers from 1 to 16 in any order: \n");

    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16);

    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);

    printf("Row sums: %d %d %d %d", a1 + a2 + a3 + a4, a5 + a6 + a7 + a8, a9 + a10 + a11 + a12, a13 + a14 + a15 + a16);

    return 0;
}
