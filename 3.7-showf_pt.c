#include <stdio.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    double dip = 5.32e-5;
    printf("浮点数：%f 科学计数法表示：%e\n", aboat, aboat);
    // 下一行要求编译器支持C99或其中的相关特性
    printf("十六进制表示：%a\n", aboat);
    printf("浮点数：%f 科学计数法表示：%e\n", abet, abet);
    printf("浮点数：%Lf 科学计数法表示：%Le\n", dip, dip);
    return 0;
}