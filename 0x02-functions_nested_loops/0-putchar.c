#include <unistd.h>

/**
 * main - Main
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char pc[] = "_putchar";
	int i;

	for (i = 0; pc[i] != '\0'; i++)
	{
		_putchar(pc[i]);
	}
	_putchar('\n');
	return (0);
}
