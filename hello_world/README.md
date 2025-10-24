
# C - Hello, World

* [Task 0](./0-preprocessor): Write a script that runs a C file through the preprocessor and save the result into another file.

  * The C file name will be saved in the variable $CFILE
  * The output should be saved in the file c
  ```
  gcc -E $CFILE -o c
  ```

* [Task 1](./1-compiler): Write a script that compiles a C file but does not link.

  * The C file name will be saved in the variable $CFILE
  * The output file should be named the same as the C file, but with the extension .o instead of .c.
    * Example: if the C file is main.c, the output file should be main.o
  ```
  gcc -c $CFILE
  ```
* [Task 2](./2-assembler): Write a script that generates the assembly code of a C code and save it in an output file.

  * The C file name will be saved in the variable $CFILE
  * The output file should be named the same as the C file, but with the extension .s instead of .c.
    * Example: if the C file is main.c, the output file should be main.s
  ```
  gcc -S $CFILE
  ```
  
* [Task 3](./3-name): Write a script that compiles a C file and creates an executable named cisfun.

  * The C file name will be saved in the variable $CFILE
  ```
  gcc $CFILE -o cisfun
  ```
  
* [Task 4](./4-puts.c): Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

  * Use the function puts
  * You are not allowed to use printf
  * Your program should end with the value 0
  ```
  #include <stdio.h>
  
  int main(void)
  {
	  puts("\"Programming is like building a multilingual puzzle");

	  return (0);
  }
  ```
  
* [Task 5](./5-printf.c): Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

  * Use the function printf
  * You are not allowed to use the function puts
  * Your program should return 0
  * Your program should compile without warning when using the -Wall gcc option
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
  * Your program should return 0
  * If you are using a linux on Vagrant you might have to install the package libc6-dev-i386 to test the -m32 gcc option (normally you dont need to do anything on your sandbox).
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
