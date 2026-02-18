<a href="#"><img src="https://img.shields.io/badge/-006CAF.svg?style=for-the-badge&logo=c&logoColor=white" /></a>
[![Holberton](https://img.shields.io/badge/Holberton-E31C3F.svg?style=for-the-badge)](https://www.holbertonschool.fr/)

# C - Functions, nested loops

## **[0. _putchar](0-putchar.c)**

Write a program that prints ```_putchar```, followed by a new line.

* The program should return ```0```

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * main - Prints '_putchar'
 *		  followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
```
</details>

---

## **[1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](1-alphabet.c)**

Write a function that prints the alphabet, in lowercase, followed by a new line.

* Prototype: ```void print_alphabet(void);```
* You can only use ```_putchar``` twice in your code

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
```
</details>

---

## **[Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.](2-print_alphabet_x10.c)**

Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

* Prototype: ```void print_alphabet_x10(void);```

* You can only use ```_putchar``` twice in your code

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet,
 *					in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alphabet;

	while (count++ <= 9)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

			_putchar(alphabet);

		_putchar('\n');
	}
}
```
</details>

---

## **[3. islower](3-islower.c)**

Write a function that checks for lowercase character.

* Prototype: ```int _islower(int c);```
* Returns ```1``` if ```c``` is lowercase
* Returns ```0``` otherwise

FYI: The standard library provides a similar function: ```islower```. Run ```man islower``` to learn more.

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: the character to check.
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
```
</details>

---

## **[4. isalpha](4-isalpha.c)**

Write a function that checks for alphabetic character.

* Prototype: ```int _isalpha(int c);```
* Returns ```1``` if ```c``` is a letter, lowercase or uppercase
* Returns ```0``` otherwise

FYI: The standard library provides a similar function: ```isalpha```. Run ```man isalpha``` to learn more.

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * _isalpha - checks alphabetic character
 *
 * @c: the character to check.
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
```
</details>

---

## **[5. Sign](5-sign.c)**

Write a function that prints the sign of a number.

* Prototype: ```int print_sign(int n);```
* Returns ```1``` and prints ```+``` if ```n``` is greater than zero
* Returns ```0``` and prints ```0``` if ```n``` is zero
* Returns ```-1``` and prints ```-``` if ```n``` is less than zero

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: the character to check.
 * Return: 1 if greater than 0, 0 if zero, -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
```
</details>

---

## **[6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you](6-abs.c)**

Write a function that computes the absolute value of an integer.

* Prototype: ```int _abs(int);```

FYI: The standard library provides a similar function: ```abs```. Run ```man abs``` to learn more.

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: the character to check.
 * Return: absolute value of the integer
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
```
</details>

---

## **[7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important](7-print_last_digit.c)**

Write a function that prints the last digit of a number.

* Prototype: ```int print_last_digit(int);```
* Returns the value of the last digit

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: the character to check.
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
```
</details>

---

## **[8. I'm federal agent Jack Bauer, and today is the longest day of my life](8-24_hours.c)**

Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

Prototype: ```void jack_bauer(void);```

You can listen to [this soundtrack](https://www.youtube.com/watch?v=btAfXqgMkPs) while coding :)

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *				starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int minute, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');

		}
	}
}
```
</details>

---

## **[9. Learn your times table](9-times_table.c)**

Write a function that prints the 9 times table, starting with 0.

* Prototype: ```void times_table(void);```

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int numb, mult, prod;

	for (numb = 0; numb <= 9; numb++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			prod = numb * mult;

			if (mult != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
					_putchar(' ');
			}

			if (prod >= 10)
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
```
</details>

---

## **[10. a + b](10-add.c)**

Write a function that adds two integers and returns the result.

* Prototype: ```int add(int, int);```

<details>
<summary>Show answer</summary>

```C
#include "main.h"

/**
 * add - adds two integers and returns the result.
 * @num1: first integer
 * @num2: second integer
 *
 * Return: result of the operation.
 */

int add(int num1, int num2)
{
	return (num1 + num2);
}
```
</details>

---

## **[11. 98 Battery Street, the OG]()**

Write a function that prints all natural numbers from n to 98, followed by a new line.

* Prototype: ```void print_to_98(int n);```
* Numbers must be separated by a comma, followed by a space
* Numbers should be printed in order
* The first printed number should be the number passed to your function
* The last printed number should be ```98```
* You are allowed to use the standard library

<details>
<summary>Show answer</summary>

```C
#include "stdio.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *               followed by a new line.
 * @n: start of the counting loop.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
```
</details>

---

  ### By Anthony Goutieras
  Weekly project from 20/10/25 to 26/10/25 for Holberton School Bordeaux
