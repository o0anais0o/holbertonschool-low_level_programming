#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings using at..
* ..most an inputted number of bytes.
* @s1: the firts strings.
* @s2: the second strings.
* @n: the maximum number of bytes of s2 to concatenated to s1.
*
* Return: if the function fails - NULL.
*         otherwise - a pointer to the concatenated space in memory.
*
* Description: If s1 is NULL, it is treated as an empty string.
* If s2 is NULL, it is treated as an empty string.
* If n is greater than or equal to the length of s2, use the entire s2.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len = n, index;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (index = 0; s1[index]; index++)
len++;

concat = malloc(sizeof(char) * (len + 1));

if (concat == NULL)
return (NULL);

len = 0;

for (index = 0; s1[index]; index++)
concat[len++] = s1[index];

for (index = 0; s2[index] && index < n; index++)
concat[len++] = s2[index];

concat[len] = '\0';

return (concat);
}
