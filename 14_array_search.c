#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[5] = { 0 };
	int x = 0;
	int found = 0;
	for (int i = 0;i < 5;i++) {
		scanf("%d", &a[i]);
	}
	printf("Please enter a number\n");
	scanf("%d", &x);
	for (int j = 0;j < 5;j++) {
		if (a[j] == x) 
			printf("Found");
		else	found++;
		
	}
	if (found == 5)
		printf("Not Found");
	return 0;
}