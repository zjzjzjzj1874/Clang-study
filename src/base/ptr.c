#include <stdio.h>
#include "ptr.h"
// 指针是一个值，这个值代表一个内存地址，因此指针相当于指向某个内存地址的路标。
// *表示取指针变量地址中的值；
// &表示取变量所在的内存地址；

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
    int a = 10, b = 20;
    printf("swap before a:%d,b:%d\n", a, b);
    swap(a, b);
    printf("swap after a:%d,b:%d\n", a, b);

    // &取变量所在的内存地址
    int x = 1;
    printf("x addr is %p\n", &x);
    printf("x value is %d\n", x);

    // *表示取指针所在内存的值  C语言中指针类型初始化
    int *y = NULL;
    y = &x; // 少了这一段就会报：段违规
    *y = 10;
    printf("y value is %d\n", *y);
    printf("x addr is %p\n", &x);
    printf("x value is %d\n", x);
}
// endregion C语言中参数是值传递，而非指针(引用)传递

// 指针运算：指针本质上是一个无符号整数，代表的是内存地址。可以进行运算，但是规则不是整数的运算规则
void ptr_calculate()
{
    int a = 10, *pa = &a;
    double b = 99.9, *pb = &b;
    //最初的值
    printf("&a=%#X, &b=%#X\n", &a, &b);
    printf("pa=%#X, pb=%#X\n", pa, pb);
    //加法运算
    pa++;
    pb++;
    printf("加法运算：pa=%#X, pb=%#X\n", pa, pb);

    //减法运算
    pa -= 2;
    pb -= 2;
    printf("减法运算：pa=%#X, pb=%#X\n", pa, pb);

    short *j;
    j = (short *)0x1234;
    j = j + 1; // 0x1236
    printf("i=%x\n", j); // 输出16进制的整数
    printf("i=%#x\n", j);// 输出带符号的16进制整数
    printf("i=%#X\n", j);// 输出带符号的16进制整数

    // in sum:指针的算术运算，主要是对指针所指向类型的内存地址做运算，加减则是加减对应类型的长度
}