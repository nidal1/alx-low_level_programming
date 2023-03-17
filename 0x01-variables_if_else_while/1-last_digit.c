#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit
 *
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2 ;
	printf("%d", n % 10);
	return 0;
}
