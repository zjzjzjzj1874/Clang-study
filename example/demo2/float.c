#include <stdio.h>
#include <float.h>

int main() {
    printf("float存储大小：%lu\n", sizeof(float));
    printf("double存储大小：%lu\n", sizeof(double));

    printf("float最小值：%E\n", FLT_MIN);
    printf("float最大值：%E\n", FLT_MAX); // %E： 使用科学计数法表示
    printf("精度值：%d\n", FLT_DIG);

    return 0;
}