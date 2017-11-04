#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);

int time = 0;

int main(void)
{
	int n;

	printf("º~¿Õ¶ðªº°ª«×¡G");
	scanf_s("%d", &n);

	hanoi(n, '1', '2', '3');

	system("pause");
}

void hanoi(int n, char first, char tmp, char least)
{
	if (n == 1)
	{
		printf("%c -> %c\n", first, least);
	}
	else
	{
		hanoi(n - 1, first, least, tmp);
		printf("%c -> %c\n", first, least);
		hanoi(n - 1, tmp, first, least);
	}
}