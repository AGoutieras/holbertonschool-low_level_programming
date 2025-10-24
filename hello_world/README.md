
# C - Hello, World 
* [Task 0](./0-preprocessor): Write a script that runs a C file through the preprocessor and save the result into another file.

  * The C file name will be saved in the variable $${\color{red}\\$CFILE}$$
  * The output should be saved in the file $${\color{red}c}$$
  ```
  gcc -E $CFILE -o c
  ```

* [Task 1](./1-compiler): Write a script that compiles a C file but does not link.

  * The C file name will be saved in the variable $${\color{red}\\$CFILE}$$
  * The output file should be named the same as the C file, but with the extension .o instead of $${\color{red}.c}$$.
    * Example: if the C file is $${\color{red}main.c}$$, the output file should be $${\color{red}main.o}$$
  ```
  gcc -c $CFILE
  ```
* [Task 2](./2-assembler): Write a script that generates the assembly code of a C code and save it in an output file.

  * The C file name will be saved in the variable $${\color{red}\\$CFILE}$$
  * The output file should be named the same as the C file, but with the extension $${\color{red}.s}$$ instead of $${\color{red}.c}$$.
    * Example: if the C file is $${\color{red}main.c}$$, the output file should be $${\color{red}main.s}$$
  ```
  gcc -S $CFILE
  ```
  
* [Task 3](./3-name): Write a script that compiles a C file and creates an executable named $${\color{red}cisfun}$$.

  * The C file name will be saved in the variable $${\color{red}\\$CFILE}$$
  ```
  gcc $CFILE -o cisfun
  ```
  
* [Task 4](./4-puts.c): Write a C program that prints exactly $${\color{red}"Programming \space is \space like \space building \space a \space multilingual \space puzzle}$$, followed by a new line.

  * Use the function $${\color{red}puts}$$
  * You are not allowed to use $${\color{red}printf}$$
  * Your program should end with the value $${\color{red}0}$$
  ```
  #include <stdio.h>
  
  int main(void)
  {
	  puts("\"Programming is like building a multilingual puzzle");

	  return (0);
  }
  ```
  
* [Task 5](./5-printf.c): Write a C program that prints exactly $${\color{red}with \space proper \space grammar, \space but \space the \space outcome \space is \space a \space piece \space of \space art,}$$, followed by a new line.

  * Use the function $${\color{red}printf}$$
  * You are not allowed to use the function $${\color{red}puts}$$
  * Your program should return $${\color{red}0}$$
  * Your program should compile without warning when using the $${\color{red}-Wall \space gcc}$$ option
  ```
  #include <stdio.h>

  int main(void)
  {
  	printf("with proper grammar, but the outcome is a piece of art,\n");
  
  	return (0);
  }
  ```
  
* [Task 6](./6-size.c): Write a C program that prints the size of various types on the computer it is compiled and run on.

  * You should produce the exact same output as in the example
  * Warnings are allowed
  * Your program should return $${\color{red}0}$$
  * If you are using a linux on Vagrant you might have to install the package $${\color{red}libc6-dev-i386}$$ to test the $${\color{red}-m32 \space gcc}$$  option (normally you dont need to do anything on your sandbox).
  ```
  #include <stdio.h>

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

### By Anthony Goutieras
  Weekly project from 10/10/25 to 19/10/25 for Holberton School Bordeaux
