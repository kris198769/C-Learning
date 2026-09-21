#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[5] = {0};
	int sum = 0;
	for (int i = 0;i < 5;i++) {
		scanf("%d", &a[i]);
	}
	for (int j = 0;j < 5;j++) {
		sum += a[j];
	}
	printf("%d",sum);
	return 0;
}