<a href="#"><img src="https://img.shields.io/badge/-006CAF.svg?style=for-the-badge&logo=c&logoColor=white" /></a>
[![Holberton](https://img.shields.io/badge/Holberton-E31C3F.svg?style=for-the-badge)](https://www.holbertonschool.fr/)

# C - Function pointers

## **[0. What's my name](0-print_name.c)**

Write a function that prints a name.

* Prototype: ```void print_name(char *name, void (*f)(char *));```

<details>
<summary>Show answer</summary>

```C
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name to print
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
```
</details>

---

## **[1. If you spend too much time thinking about a thing, you'll never get it done](1-array_iterator.c)**

Write a function that executes a function given as a parameter on each element of an array.

* Prototype: ```void array_iterator(int *array, size_t size, void (*action)(int));```
* where ```size``` is the size of the array
* and ```action``` is a pointer to the function you need to use

<details>
<summary>Show answer</summary>

```C
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *					on each element of an array.
 * @array: array
 * @size: size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || size == 0)
		return;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
```
</details>

---

## **[2. To hell with circumstances; I create opportunities](2-int_index.c)**

Write a function that searches for an integer.

* Prototype: ```int int_index(int *array, int size, int (*cmp)(int));```
* where ```size``` is the number of elements in the array ```array```
* ```cmp``` is a pointer to the function to be used to compare values
* ```int_index``` returns the index of the first element for which the ```cmp``` function does not return ```0```
* If no element matches, return ```-1```
* If size <= ```0```, return ```-1```

<details>
<summary>Show answer</summary>

```C
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: array
 * @size: size of the array
 * @cmp: function pointer
 * Return: '-1' if no element matches, returns index otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);

}
```
</details>

---

## **3. A goal is not always meant to be reached, it often serves simply as something to aim at**

Write a program that performs simple operations.

* You are allowed to use the standard library
* Usage: ```calc num1 operator num2```
* You can assume ```num1``` and ```num2``` are integers, so use the ```atoi``` function to convert them from the string input to ```int```
* ```operator``` is one of the following:
    * ```+```: addition
    * ```-```: subtraction
    * ```*```: multiplication
    * ```/```: division
    * ```%```: modulo
* The program prints the result of the operation, followed by a new line
* You can assume that the result of all operations can be stored in an ```int```
* if the number of arguments is wrong, print ```Error```, followed by a new line, and exit with the status ```98```
* if the ```operator``` is none of the above, print ```Error```, followed by a new line, and exit with the status ```99```
* if the user tries to divide (```/``` or ```%```) by ```0```, print ```Error```, followed by a new line, and exit with the status ```100```

#### **[3-calc.h](3-calc.h)**

This file should contain all the function prototypes and data structures used by the program.

You can use this structure:

```C
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
```
<details>
<summary>Show answer</summary>

```bash
#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
```
</details>

#### **[3-op_functions.c](3-op_functions.c)**

This file should contain the 5 following functions (not more):

* ```op_add```: returns the sum of ```a``` and ```b```. Prototype: ```int op_add(int a, int b);```
* ```op_sub```: returns the difference of ```a``` and ```b```. Prototype: ```int op_sub(int a, int b);```
* ```op_mul```: returns the product of ```a``` and ```b```. Prototype: ```int op_mul(int a, int b);```
* ```op_div```: returns the result of the division of ```a``` by ```b```. Prototype: ```int op_div(int a, int b);```
* ```p_mod```: returns the remainder of the division of ```a``` by ```b```. Prototype: ```int op_mod(int a, int b);```

<details>
<summary>Show answer</summary>

```C
	#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: result a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: result of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: result of a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: result of a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulates two integers
 * @a: first integer
 * @b: second integer
 * Return: result of a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
```
</details>

#### **[3-get_op_func.c](3-get_op_func.c)**

This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

* Prototype: ```int (*get_op_func(char *s))(int, int);```
* where ```s``` is the operator passed as argument to the program
* This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: ```get_op_func("+")``` should return a pointer to the function ```op_add```
* You are not allowed to use ```switch``` statements
* You are not allowed to use ```for``` or ```do ... while``` loops
* You are not allowed to use ```goto```
* You are not allowed to use ```else```
* You are not allowed to use more than one ```if``` statement in your code
* You are not allowed to use more than one ```while``` loop in your code
* If ```s``` does not match any of the 5 expected operators (```+```, ```-```, ```*```, ```/```, ```%```), return ```NULL```
* You are only allowed to declare these two variables in this function:

```C
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
```

<details>
<summary>Show answer</summary>

```C
	#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 *				 to perform the operation asked by the user.
 * @s: operator
 * Return: pointer to the function that corresponds
 *		   to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
```
</details>

#### **[main.c](main.c)**

This file should contain your ```main``` function only.

* You are not allowed to code any other function than ```main``` in this file
* You are not allowed to directly call ```op_add```, ```op_sub```, ```op_mul```, ```op_div``` or ```op_mod``` from the ```main``` function
* You have to use ```atoi``` to convert arguments to ```int```
* You are not allowed to use any kind of loop
* You are allowed to use a maximum of 3 ```if``` statements

<details>
<summary>Show answer</summary>

```C
	#include "3-calc.h"

/**
 * main - performs simple operations.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char **argv)
{

	int num1, num2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(num1, num2));

	return (0);
}
```
</details>

---

  ### By Anthony Goutieras
  Weekly project from 17/11/25 to 21/11/25 for Holberton School Bordeaux
