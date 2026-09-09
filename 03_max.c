/*
题目：三个数找最大值
要求：输入三个整数，使用 if / else 判断并输出最大值。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c)
		printf("%d",a);
	else if (b >= a && b >= c)
		printf("%d",b);
	else if (c >= a && c >= b)
		printf("%d",c);
	return 0;


}

