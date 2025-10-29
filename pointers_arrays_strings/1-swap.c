#include "main.h"

/**
 * swap_int - 
 *			    
 * 
 */

void swap_int(int *a, int *b)
{
    int c = 0;
    c = *b;
    *b = *a;
    *a = c;
}