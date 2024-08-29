#include <stdio.h>
#include <stdlib.h>

// 这个是比较干净纯粹的主函数
// int main() {
//     printf("Hello Clang\n");

//     printf("This is China\n");

//     return 0;
// }

int main(int a, char *argv[]) {
    printf("可执行程序 %s, 参数个数为：%d, 输出：【%s】\n", argv[0], a, argv[1]);

    system("ls -l"); // system表示系统调用，可以使用shell等一些常用的命令
    system("echo 'Hello World'!");
    return 0;
}