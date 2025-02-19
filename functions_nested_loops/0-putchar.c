#include <main.h>

/**
 * main - affiche _putchar suivi d'une nouvelle ligne
 *
 * Return: Toujours 0 (Succès)
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}
