#include "main.h"

/**
 * main -  
 */

char *create_array(unsigned int size, char c)
{
    unsigned int index;
    char *array;

    if (size == 0)
        return (NULL);

    array = malloc(sizeof(char) * size);

    if (array == NULL)
        return (NULL);

    for (index = 0; index < size; index++)
        array[index] = c;

    return (array);
}