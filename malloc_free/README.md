<a href="#"><img src="https://img.shields.io/badge/-006CAF.svg?style=for-the-badge&logo=c&logoColor=white" /></a>
[![Holberton](https://img.shields.io/badge/Holberton-E31C3F.svg?style=for-the-badge)](https://www.holbertonschool.fr/)

# C - malloc, free

## **[0. Float like a butterfly, sting like a bee](0-create_array.c)**

Write a function that creates an array of chars, and initializes it with a specific char.

* Prototype: ```char *create_array(unsigned int size, char c);```
* Returns ```NULL``` if size = ```0```
* Returns a pointer to the array, or ```NULL``` if it fails

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * create_array - creates an array of chars,
 *				  and initializes it with a specific char.
 * @size: size of array
 * @c: char
 * Return: Returns a pointer to the array, or NULL if malloc fails
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
```
</details>

---

## **[1. The woman who has no imagination has no wings](1-strdup.c)**

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

* Prototype: ```char *_strdup(char *str);```
* The ```_strdup()``` function returns a pointer to a new string which is a duplicate of the string ```str```. Memory for the new string is obtained with ```malloc```, and can be freed with ```free```.
* Returns ```NULL``` if str = NULL
* On success, the ```_strdup``` function returns a pointer to the duplicated string. It returns ```NULL``` if insufficient memory was available

FYI: The standard library provides a similar function: ```strdup```. Run ```man strdup``` to learn more.

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: string
 * Return: duplicated string, NULL if malloc fails.
 */

char *_strdup(char *str)
{
	int index, len = 0;
	char *dupe;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dupe = malloc(sizeof(char) * (len + 1));

	if (dupe == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dupe[index] = str[index];
	dupe[len] = '\0';

	return (dupe);
}
```
</details>

---

## **[2. He who is not courageous enough to take risks will accomplish nothing in life](2-str_concat.c)**

Write a function that concatenates two strings.

* Prototype: ```char *str_concat(char *s1, char *s2);```
* The returned pointer should point to a newly allocated space in memory which contains the contents of ```s1```, followed by the contents of ```s2```, and null terminated
* if ```NULL``` is passed, treat it as an empty string
* The function should return ```NULL``` on failure

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first half of string
 * @s2: second half of string
 * Return: concatenated string, NULL if malloc fails.
 */

char *str_concat(char *s1, char *s2)
{
	int index, i_concat = 0, len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
	len++;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat[i_concat++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat[i_concat++] = s2[index];

	return (concat);
}
```
</details>

---

## **[3. If you even dream of beating me you'd better wake up and apologize](3-alloc_grid.c)**

Write a function that returns a pointer to a 2 dimensional array of integers.

* Prototype: ```int **alloc_grid(int width, int height);```
* Each element of the grid should be initialized to ```0```
* The function should return ```NULL``` on failure
* If ```width``` or ```height``` is ```0``` or negative, return ```NULL```

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: NULL if malloc fails, 0 if width of height is <= 0,
 * returns pointer otherwise.
 */

int **alloc_grid(int width, int height)
{
	int **grid, i_height, i_width;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i_height = 0; i_height < height; i_height++)
	{
		grid[i_height] = malloc(sizeof(int) * width);

		if (grid[i_height] == NULL)
		{
			for (i_height = i_height - 1; i_height >= 0; i_height--)
				free(grid[i_height]);

			free(grid);
			return (NULL);
		}
	}

	for (i_height = 0; i_height < height; i_height++)
	{
		for (i_width = 0; i_width < width; i_width++)
			grid[i_height][i_width] = 0;
	}

	return (grid);
}
```
</details>

---

## **[4. It's not bragging if you can back it up](4-free_grid.c)**

Write a function that frees a 2 dimensional grid previously created by your ```alloc_grid``` function.

* Prototype: ```void free_grid(int **grid, int height);```
* Note that we will compile with your ```alloc_grid.c``` file. Make sure it compiles.

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * free_grid - returns a pointer to a 2 dimensional array of integers.
 * @grid: array to be freed.
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
```
</details>

---

  ### By Anthony Goutieras
  Weekly project from 10/11/25 to 14/11/25 for Holberton School Bordeaux
