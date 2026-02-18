<a href="#"><img src="https://img.shields.io/badge/-006CAF.svg?style=for-the-badge&logo=c&logoColor=white" /></a>
[![Holberton](https://img.shields.io/badge/Holberton-E31C3F.svg?style=for-the-badge)](https://www.holbertonschool.fr/)

# C - Hello, World

## **[0. Preprocessor](0-preprocessor)**

Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable ```$CFILE```
* The output should be saved in the file ```c```

<details>
<summary>Show answer</summary>

```C
#!/bin/bash
gcc -E $CFILE -o c
```
</details>

---

## **[1. Compiler](1-compiler)**

Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable ```$CFILE```
* The output file should be named the same as the C file, but with the extension ```.o``` instead of ```.c```.
    * Example: if the C file is ```main.c```, the output file should be ```main.o```

<details>
<summary>Show answer</summary>

```C
#!/bin/bash
gcc -c $CFILE
```
</details>

---

## **[2. Assembler](2-assembler)**

Write a script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable ```$CFILE```
* The output file should be named the same as the C file, but with the extension ```.s``` instead of ```.c```.
    * Example: if the C file is ```main.c```, the output file should be ```main.s```

<details>
<summary>Show answer</summary>

```C
#!/bin/bash
gcc -S $CFILE
```
</details>

---

## **[3. Name](3-name)**

Write a script that compiles a C file and creates an executable named ```cisfun```.

* The C file name will be saved in the variable ```$CFILE```

<details>
<summary>Show answer</summary>

```C
#!/bin/bash
gcc $CFILE -o cisfun
```
</details>

---

## **[4. Hello, puts](4-puts.c)**

Write a C program that prints exactly ```"Programming is like building a multilingual puzzle```, followed by a new line.

* Use the function ```puts```
* You are not allowed to use ```printf```
* Your program should end with the value ```0```

<details>
<summary>Show answer</summary>

```C
#include <stdio.h>

/**
 * main - prints text
 *
 * Return: Always 0
 */


int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");

	return (0);
}
```
</details>

---

## **[5. Hello, printf](5-printf.c)**

Write a C program that prints exactly ```with proper grammar, but the outcome is a piece of art,```, followed by a new line.

* Use the function ```printf```
* You are not allowed to use the function ```puts```
* Your program should return ```0```
* Your program should compile without warning when using the ```-Wall``` ```gcc``` option

<details>
<summary>Show answer</summary>

```C
#include <stdio.h>

/**
 * main - prints text
 *
 * Return: Always 0
 */


int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");

	return (0);
}
```
</details>

---

## **[6. Size is not grandeur, and territory does not make a nation](6-size.c)**

Write a C program that prints the size of various types on the computer it is compiled and run on.

* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return ```0```
* If you are using a linux on Vagrant you might have to install the package ```libc6-dev-i386``` to test the ```-m32``` ```gcc``` option (normally you dont need to do anything on your sandbox).

<details>
<summary>Show answer</summary>

```C
#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * on the computer it is compiled and run on.
 *
 * Return: Always 0
 */


int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
```
</details>

---

  ### By Anthony Goutieras
  Weekly project from 20/10/25 to 26/10/25 for Holberton School Bordeaux
