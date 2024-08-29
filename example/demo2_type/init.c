#include <stdio.h>

extern int x; // 申明外部变量
int x; // 定义外部变量，可以不用初始化，不初始化，值则为该类型的默认值。
// x = 20; // 申明后并初始化x

int main() {
    int a = 10; 
    int b;

    printf("a = %d, b = %d, x = %d\n", a, b, x);

    return 0;
}