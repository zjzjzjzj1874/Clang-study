#include <stdio.h>

// 定义外部变量：x、y
int x;
int y;

// 定义函数：两数相加
int addTwo() {
    extern int x;
    extern int y;
    x = 1;
    y = 2;

    return x + y;
}

int main() {
    int result = addTwo();
    
    printf("result: %d\n", result);

    int arr[] = {1,2,3};
    printf("arr = ");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}