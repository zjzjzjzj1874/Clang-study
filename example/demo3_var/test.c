#include <stdio.h>

int x = 1;
int y = 2;
int addTwo();
int main(void) {
    int result = addTwo();

    printf("result ==== %d\n", result);

    return 0;
}