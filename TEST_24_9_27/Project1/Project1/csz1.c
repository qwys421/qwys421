#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int number, guess, attempts = 0;
	srand(time(0));
	number = rand() % 100 + 1;
	printf("������\n");
	printf("���Ѿ���һ��һ���������һ����\n");
do {
	printf("������Ĳ²⣺");
	scanf_s("%d", &guess);
	attempts++;
	if (guess > number) {
		printf("̫���ˣ�\n");
	}
	else if (guess < number) {
		printf("̫С�ˣ�\n");
	}
	else {
		printf("��ϲ�㣬�¶��ˣ�������%d�λ��ᡣ\n", attempts);
	}
} while (guess != number);

return 0;
}