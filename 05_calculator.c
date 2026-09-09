/*
题目：简单计算器
要求：输入两个整数和一个运算符（+、-、*、/），
根据运算符进行计算并输出结果。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    char ob = 0;
    scanf("%d %c %d", &a, &ob, &b);
    if (ob == '/' && b == 0) {
        printf("error");
    }
    else
        switch (ob) {
        case '+':
            printf("%d%c%d=%d", a, ob, b, a + b);
            break;

        case '-':
            printf("%d%c%d=%d", a, ob, b, a - b);
            break;

        case '*':
            printf("%d%c%d=%d", a, ob, b, a * b);
            break;

        case '/':
            printf("%d%c%d=%d", a, ob, b, a / b);
            break;

        default:
            printf("error");
            break;
        }
    

    return 0;
}