// 类型转换


#include <stdio.h>

int main() {
    // 隐式转换
    int i = 10;
    float f = 3.14;
    double d = i + f;
    printf("result d: %f\n", d);

    // 显式转换
    double dd = 3.14159;
    int ii = (int)dd; // 显式

    printf("result ii:%d\n", ii);
    return 0;
}