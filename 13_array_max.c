#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[5] = { 0 };
	
	for (int i = 0;i < 5;i++) {
		scanf("%d", &a[i]);
	}
	int max = a[0];
	for (int j = 1;j < 5;j++) {
		if (a[j] >= max) {
			max = a[j];
		}
	}
	printf("%d", max);
	return 0;
}