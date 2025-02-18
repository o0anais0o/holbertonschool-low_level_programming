#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	//declare a variable
	char alphabetminuscule;

	for (alphabetminuscule = 'a'; alphabetminuscule <= 'z' ; alphabetminuscule++)
	{
		// print the value of the variable
		putchar(alphabetminuscule); 

	}

	putchar('\n');
	return (0);
}
