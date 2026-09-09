/*
题目：判断三个数能否组成三角形
要求：输入三个整数，判断它们能否组成三角形。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
		printf("Can form a triangle");
	else
		printf("Cannot form a triangle");
	return 0;

}