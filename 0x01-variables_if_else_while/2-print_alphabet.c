#include <stdio.h>
/**
 * main - print all alphabets in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char a;

	for (i = 97; i <= 122; i++)
	{
		a = (char) i;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
