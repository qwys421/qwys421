#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int number, guess, attempts = 0;
	srand(time(0));
	number = rand() % 100 + 1;
	printf("猜数字\n");
	printf("我已经从一到一百中想好了一个数\n");
do {
	printf("输入你的猜测：");
	scanf_s("%d", &guess);
	attempts++;
	if (guess > number) {
		printf("太大了！\n");
	}
	else if (guess < number) {
		printf("太小了！\n");
	}
	else {
		printf("恭喜你，猜对了！你用了%d次机会。\n", attempts);
	}
} while (guess != number);

return 0;
}