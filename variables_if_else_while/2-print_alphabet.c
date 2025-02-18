#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabetminuscule;

	for (alphabetminuscule = 'a'; alphabetminuscule <= 'z' ; alphabetminuscule++)
	{
		putchar(alphabetminuscule); 

	}

	putchar('\n');
	return (0);
}
