<a href="#"><img src="https://img.shields.io/badge/-006CAF.svg?style=for-the-badge&logo=c&logoColor=white" /></a>
[![Holberton](https://img.shields.io/badge/Holberton-E31C3F.svg?style=for-the-badge)](https://www.holbertonschool.fr/)

# C - argc, argv

## **[0. It ain't what they call you, it's what you answer to](0-whatsmyname.c)**

Write a program that prints its name, followed by a new line.

* If you rename the program, it will print the new name, without having to compile it again
* You should not remove the path before the name of the program

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * print_name - prints name of the program, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 */

void print_name(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	print_name(argc, argv);
	return (0);
}
```
</details>

---

## **[1. Silence is argument carried out by other means](1-args.c)**

Write a program that prints the number of arguments passed into it.

* Your program should print a number, followed by a new line

<details>
<summary>Show answer</summary>

```C

```
</details>

---

## **[2. The best argument against democracy is a five-minute conversation with the average voter](2-args.c)**

Write a program that prints all arguments it receives.

* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
```
</details>

---

## **[3. Neither irony nor sarcasm is argument](3-mul.c)**

Write a program that multiplies two numbers.

* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print ```Error```, followed by a new line, and return ```1```

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if more than 2 arguments, 0 otherwise.
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
```
</details>

---

## **[4. To infinity and beyond](4-add.c)**

Write a program that adds positive numbers.

* Print the result, followed by a new line
* If no number is passed to the program, print ```0```, followed by a new line
* If one of the number contains symbols that are not digits, print ```Error```, followed by a new line, and return ```1```
* You can assume that numbers and the addition of all the numbers can be stored in an ```int```



<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * main -  adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if number contains non-digit symbols, 0 otherwise
 */

int main(int argc, char **argv)
{
	int arg_index, char_index;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (arg_index = 1; arg_index < argc; arg_index++)
	{
		for (char_index = 0; argv[arg_index][char_index] != '\0'; char_index++)
		{
			if (argv[arg_index][char_index] < '0' || argv[arg_index][char_index] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[arg_index]);
	}

	printf("%d\n", sum);
	return (0);
}
```
</details>

---

## **[5. Minimal Number of Coins for Change](100-change.c)**

Write a program that prints the minimum number of coins to make change for an amount of money.

* Usage: ```./change cents```
* where ```cents``` is the amount of cents you need to give back
* if the number of arguments passed to your program is not exactly ```1```, print ```Error```, followed by a new line, and return ```1```
* you should use ```atoi``` to parse the parameter passed to your program
* If the number passed as the argument is negative, print ```0```, followed by a new line
* You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * main -  prints the minimum number of coins
 *         to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if number of arguments isn't exactly 1, 0 otherwise.
 */

int main(int argc, char **argv)
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins += cents / 25;
	cents = cents % 25;

	coins += cents / 10;
	cents = cents % 10;

	coins += cents / 5;
	cents = cents %  5;

	coins += cents / 2;
	cents = cents % 2;

	coins += cents / 1;
	cents = cents % 1;

	printf("%d\n", coins);

	return (0);
}
```
</details>

---

  ### By Anthony Goutieras
  Weekly project from 03/11/25 to 07/11/25 for Holberton School Bordeaux
