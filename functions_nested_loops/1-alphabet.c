#include "main.h"

/**
 * print_alphabet - imprime l'alphabet en minuscules, suivi d'une nouvelle ligne
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}
