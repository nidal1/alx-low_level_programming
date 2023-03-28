#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));
	while (sum < 200)
	{
		c = rand() % 94 + 33;
		putchar(c);
		sum += c;
	}
	putchar(200 - sum);
	return (0);
}

