
# C - Functions, nested loops

* [Task 0](./0-putchar.c): Write a program that prints $${\color{red}\\_putchar}$$, followed by a new line.

  * The program should return $${\color{red}0}$$
   <details>
    <summary>Show answer</summary>

  ```
  #include "main.h"

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

* [Task 1](./1-alphabet.c): Write a function that prints the alphabet, in lowercase, followed by a new line.

  * Prototype: $${\color{red}void \space print\\_alphabet(void);}$$
  * You can only use $${\color{red}\\_putchar}$$ twice in your code
  <details>
    <summary>Show answer</summary>

  ```
  #include "main.h"

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
* [Task 2](./2-print_alphabet_x10.c): Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

  * Prototype: $${\color{red}void \space print\\_alphabet\\_x10(void);}$$
  * You can only use $${\color{red}\\_putchar}$$ twice in your code
  <details>
    <summary>Show answer</summary>

  ```
  #include "main.h"

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
  
* [Task 3](./3-islower.c): Write a function that checks for lowercase character.

  * Prototype: $${\color{red}int \space \\_islower(int \space c);}$$
  * Returns $${\color{red}1}$$ if $${\color{red}c}$$ is lowercase
  * Returns $${\color{red}0}$$ otherwise
  
  FYI: The standard library provides a similar function: $${\color{red}islower}$$. Run $${\color{red}man \space islower}$$ to learn more.
  <details>
    <summary>Show answer</summary>

  ```
  #include "main.h"

  int _islower(int c)
  {
  	if (c >= 'a' && c <= 'z')
  		return (1);
  	else
  		return (0);
  }

  ```
  </details>
  
* [Task 4](./4-isalpha.c): Write a function that checks for alphabetic character.

  * Prototype: $${\color{red}int \space \\_isalpha(int \space c);}$$
  * Returns $${\color{red}1}$$ if $${\color{red}c}$$ is a letter, lowercase or uppercase
  * Returns $${\color{red}0}$$ otherwise

FYI: The standard library provides a similar function: $${\color{red}isalpha}$$. Run $${\color{red}man \space isalpha}$$ to learn more.
  <details>
    <summary>Show answer</summary>

  ```
  #include "main.h"

  int _isalpha(int c)
  {
  	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
  		return (1);
  	else
  		return (0);
  }

  ```
  </details>
  
* [Task 5](./5-sign.c): Write a function that prints the sign of a number.

  * Prototype: $${\color{red}int \space print\\_sign(int\space n);}$$
  * Returns $${\color{red}1}$$ and prints $${\color{red}+}$$ if $${\color{red}n}$$ is greater than zero
  * Returns $${\color{red}0}$$ and prints $${\color{red}0}$$ if $${\color{red}n}$$ is zero
  * Returns $${\color{red}-1}$$ and prints $${\color{red}-}$$ if n is less than zero
  <details>
    <summary>Show answer</summary>

  ```
  #include "main.h"

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
  
* [Task 6](./6-abs.c): Write a function that computes the absolute value of an integer.

  * Prototype: $${\color{red}int \space \\_abs(int);}$$

FYI: The standard library provides a similar function: $${\color{red}abs}$$. Run $${\color{red}man \space abs}$$ to learn more.
  <details>
    <summary>Show answer</summary>

  ```
  #include "main.h"

  int _abs(int n)
  {
  	if (n >= 0)
  		return (n);
  	else
  		return (-n);
  }

  ```
  </details>
  
* [Task 7](./7-print_last_digit.c): Write a function that prints the last digit of a number.

  * Prototype: $${\color{red}int \space print\\_last\\_digit(int);}$$
  * Returns the value of the last digit
  <details>
    <summary>Show answer</summary>

  ```
  #include "main.h"

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
  
* [Task 8](./8-24_hours.c): Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

  * Prototype: $${\color{red}void \space jack\\_bauer(void);}$$
  * You can listen to [this soundtrack](https://www.youtube.com/watch?v=btAfXqgMkPs) while coding :)
  <details>
    <summary>Show answer</summary>

  ```
  #include "main.h"

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
  
* [Task 9](./9-times_table.c): Write a function that prints the 9 times table, starting with 0.

  * Prototype: $${\color{red}void \space times\\_table(void);}$$

  <details>
    <summary>Show answer</summary>

  ```
  #include "main.h"

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

* [Task 10](./10-add.c): Write a function that adds two integers and returns the result.

  * Prototype: $${\color{red}int \space add(int, \space int);}$$
  <details>
    <summary>Show answer</summary>

  ```
  #include "main.h"

  int add(int num1, int num2)
  {
  	return (num1 + num2);
  }

  ```
  </details>
  
* [Task 11](./11-print_to_98.c): Write a function that prints all natural numbers from $${\color{red}n}$$ to $${\color{red}98}$$, followed by a new line.

  * Prototype: $${\color{red}void \space print\\_to\\_98(int \space n);}$$
  * Numbers must be separated by a comma, followed by a space
  * Numbers should be printed in order
  * The first printed number should be the number passed to your function
  * The last printed number should be $${\color{red}98}$$
  * You are allowed to use the standard library
  <details>
    <summary>Show answer</summary>

  ```
  #include "stdio.h"

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

### By Anthony Goutieras
  Weekly project from 10/10/25 to 19/10/25 for Holberton School Bordeaux
