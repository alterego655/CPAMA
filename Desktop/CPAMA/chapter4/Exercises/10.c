#include <stdio.h>

int main(void) {

    int i = 2, j = 8;

    j = (i = 6) + (j = 3);

    printf("%d %d", i, j);

    return 0;
}
