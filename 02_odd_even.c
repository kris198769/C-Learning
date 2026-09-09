#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int math = 0;
	scanf("%d", &math);
	if (math % 2 == 0)
		printf("even");
	else
		printf("odd");
	return 0;
}
