#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int answer = 50;
	int guess = 0;
	int count = 0;
	while (guess!=answer) {
		scanf("%d", &guess);
		if (guess > answer)
			printf("Too big\n");
		else if (guess < answer)
			printf("Too small\n");
		else printf("Correct!\n");
		count++;
	}
	if (count == 1)
		printf("You succeeded on the first try!");
	else
	printf("You guessed it in %d tries", count);
	return 0;
}