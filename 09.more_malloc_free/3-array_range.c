#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *array, index, size; /*déclare trois variables*/

	if (min > max) /*Vérification de la validité des paramètres*/
		return (NULL);

	size = max - min + 1; /*Calcul de la taille du tableau*/

	array = malloc(sizeof(int) * size); /*Allocation de mémoire*/

	if (array == NULL) /*Vérification de l'allocation*/
		return (NULL);

	for (index = 0; index < size; index++) /*Remplissage du tableau*/
		array[index] = min++;

	return (array); /*Retour du tableau*/
}
