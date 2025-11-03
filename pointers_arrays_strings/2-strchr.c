#include "main.h"

/**
 * _strchr - locates a character in a string.
 */

char *_strchr(char *s, char c)
{
    int index = 0;

    while (s[index] != '\0')
    {
        if (s[index] == c)
            return &s[index];
        index++;
    }

    return (s);
}