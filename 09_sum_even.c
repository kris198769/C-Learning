#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i = 0, sum = 0;
	for (i = 1;i <= 100;i++) {
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d", sum);
	return 0;

}