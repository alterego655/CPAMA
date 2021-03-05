#include <stdio.h>

int main(void) {
    int i = 6, j;
    j = i += i;

    printf("%d %d", i, j);
    return 0;
}
