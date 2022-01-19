#include <stdio.h>

void increament(int *p)
{
    *p = *p + 1;
}

int main()
{
    printf("hello world\n");
    // printf("Hello, World!\n");


    // if (0.1 + 0.2 == 0.3)  printf("true\n"); // C语言中，01+02 != 0.3 请注意
    // else printf("false\n");
    
    // // printf("0.1 + 0.2 = %f\n", 0.1 + 0.2);
    
    // printf("%zd\n", sizeof(int));
    // printf("%zd\n", sizeof(0.3));
    // printf("%zd\n", sizeof(float));
    
    int x = 1;
    printf("x addr is %p\n", &x);
    
    increament(&x);
    printf("x is %d\n", x);
    
    // 指针变量的初始化
    // int* p = NULL;
}