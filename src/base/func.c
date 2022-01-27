#include <stdio.h>
#include <stdarg.h>
#include "func.h"
//  C语言约定，返回值0表示函数运行成功，如果返回其他非零整数，就表示运行失败

// 可变参数函数
// 定义于头文件 <stdarg.h>
// (宏函数) va_start
// 令函数得以访问可变参数

// (宏函数) va_arg
// 访问下一个函数可变参数

// (宏函数) va_copy(C99)
// 创造函数可变参数的副本

// (宏函数) va_end
// 结束函数可变参数的行程
void simple_printf(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
 
    while (*fmt != '\0') {
        if (*fmt == 'd') {
            int i = va_arg(args, int);
            printf("%d\n", i);
        } else if (*fmt == 'c') {
            // 将提升 'char' 类型值为 'int'
            // C 中字符常量自身为 'int' 类型
            int c = va_arg(args, int);
            printf("%c\n", c);
        } else if (*fmt == 'f') {
            double d = va_arg(args, double);
            printf("%f\n", d);
        }
        ++fmt;
    }
 
    va_end(args);
}

// plus_one:对传入的参数+1
int plus_one(int n)
{
    return n + 1;
}

