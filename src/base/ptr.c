#include <stdio.h>
#include "ptr.h"
// 指针是一个值，这个值代表一个内存地址，因此指针相当于指向某个内存地址的路标。

/*
    // 指针的申明方式：
    int* intptr;
    int *intptr;
    int * intptr;

    // 同一行申明两个指针变量
    int * foo, * bar;
    // 一下不是申明两个指针
    int * foo, bar; // 表示foo是指针变量，而bar是整数变量 ==> *对第一个变量生效；

    // 指针的指针
    int** foo; // foo是一个指针，指向的仍然是一个指针；而第二个指针则指向一个整数
*/

// *运算符 ==> 指针运算符
void increment(int *p)
{
    *p = *p + 1; // *除了表示指针，还可以作为运算符，用来取出指针变量所指向内存地址中的值；
}

// region C语言中参数是值传递，而非指针(引用)传递
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("swap internal a:%d,b:%d\n", a, b);
}
void value_pass_test()
{
    int a = 10,b = 20;
    printf("swap before a:%d,b:%d\n", a, b);
    swap(a,b);
    printf("swap after a:%d,b:%d\n", a, b);

}
// endregion C语言中参数是值传递，而非指针(引用)传递
