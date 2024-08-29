## clang数据类型

clang中类型大概可以分为：
基本数据类型
枚举类型
void类型
派生类型
> 数组类型和结构体类型统称为聚合类型。函数的类型指函数返回值的类型

### 整数类型

| 类型 | 存储大小 | 值范围 |
| --- | --- | --- |
| char | 1字节 | [-128, 127] 或 [0,255] |
| unsigned char | 1字节 | [0,255] |
| int | 2或4字节 | [-32768, 32767] 或 [-2147483648,2147483647] |
| unsigned int | 2或4字节 | [0, 65535] 或 [0,4294967295] |
| short | 2字节 | [-32768, 32767] |
| unsigned short | 2字节 | [0, 65535] |
| long | 4字节 | [-2147483648,2147483647] |
| unsigned long | 4字节 | [0,4294967295] |

> 如果要查看对应的类型或者变量在某个平台的存储大小，可以使用limits.h包中的sizeof来查询
```c
    #include <stdio.h>
    #include <limits.h>
    int main() {
        printf("int类型的存储大小为：%lu", sizeof(int));
        return 0;
    }
```

### 浮点类型

| 类型 | 存储大小 | 值范围 | 精度 |
| --- | --- | --- | --- |
| float | 4字节 | [1.2E-38, 3.4E+38] | 6位有效位 | 
| double | 8字节 | [2.3E-308, 1.7E+308] | 15位有效位 | 
| long double | 16字节 | [3.4E-4932, 1.1E+4932] | 19位有效位 | 

```c
    #include <stdio.h>
    #include <float.h>
    int main() {
        printf("float类型的存储大小为：%lu\n", sizeof(float));
        printf("double类型的存储大小为：%lu\n", sizeof(double));
        printf("float类型的最小值：%E\n", FLT_MIN);
        printf("float类型的最大值：%E\n", FLT_MAX);

        printf("精度值：%d\n", FLT_DIG);
        return 0;
    }
```