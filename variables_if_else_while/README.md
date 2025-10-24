
# C - Variables, if, else, while

* [Task 0](./0-positive_or_negative.c): This program will assign a random number to the variable $${\color{red}n}$$ each time it is executed. Complete the source code in order to print whether the number stored in the variable $${\color{red}n}$$ is positive or negative.

  * You can find the source code [here](https://github.com/hs-hq/0x01.c/blob/main/0-positive_or_negative_c)
  * The variable $${\color{red}n}$$ will store a different value every time you will run this program
  * You don’t have to understand what $${\color{red}rand}$$, $${\color{red}srand}$$, $${\color{red}RAND\\_MAX}$$ do. Please do not touch this code
  * The output of the program should be:
    * The number, followed by
      * if the number is greater than 0: $${\color{red}is \space positive}$$
      * if the number is 0: $${\color{red}is \space zero}$$
      * if the number is less than 0: $${\color{red}is \space negative}$$
    * followed by a new line
  ```
  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  
  int main(void)
  {
  	int n;
  
  	srand(time(0));
  	n = rand() - RAND_MAX / 2;
  
  	if (n > 0)
  	{
  		printf("%d is positive\n", n);
  	}
  	else if (n < 0)
  	{
  		printf("%d is negative\n", n);
  	}
  	else
  	{
  		printf("%d is zero\n", n);
  	}
  	return (0);
  }
  ```

* [Task 1](./1-last_digit.c): This program will assign a random number to the variable $${\color{red}n}$$ each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable $${\color{red}n}$$.

  * You can find the source code [here](https://github.com/hs-hq/0x01.c/blob/main/1-last_digit_c)
  * The variable $${\color{red}n}$$ will store a different value every time you run this program
  * You don’t have to understand what $${\color{red}rand}$$, $${\color{red}srand}$$, and $${\color{red}RAND\\_MAX}$$ do. Please do not touch this code
  * The output of the program should be:
    * The string Last digit of, followed by
    * $${\color{red}n}$$, followed by
    * the string $${\color{red}is}$$, followed by
      * if the last digit of $${\color{red}n}$$ is greater than 5: the string $${\color{red}and \space is \space greater \space than \space 5}$$
      * if the last digit of $${\color{red}n}$$ is 0: the string $${\color{red}and \space is \space 0}$$
      * if the last digit of $${\color{red}n}$$ is less than 6 and not 0: the string $${\color{red}and \space is \space less \space than \space 6 \space and \space not \space 0}$$
    * followed by a new line
  ```
  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  
  int main(void)
  {
  	int n, lastDigit;
  
  	srand(time(0));
  	n = rand() - RAND_MAX / 2;
  	lastDigit = n % 10;
  
  	if (lastDigit > 5)
  	{
  		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
  	}
  	else if (lastDigit < 6 && lastDigit != 0)
  	{
  		printf("Last digit of %d is %d and is less than 6 and not 0\n"
  		, n, lastDigit);
  	}
  	else
  	{
  		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
  	}
  	return (0);
  }
  ```
* [Task 2](./2-print_alphabet.c): Write a program that prints the alphabet in lowercase, followed by a new line.

  * You can only use the $${\color{red}putcha}$$r function (every other function ($${\color{red}printf}$$, $${\color{red}puts}$$, etc…) is forbidden)
  * All your code should be in the $${\color{red}main}$$ function
  * You can only use $${\color{red}putchar}$$ twice in your code
  ```
  #include <stdio.h>
  
  int main(void)
  {
  	char alphabet;
  
  	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
  	{
  		putchar(alphabet);
  	}
  	putchar('\n');
  
  	return (0);
  }
  ```
  
* [Task 3](./3-print_alphabets.c): Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

  * You can only use the $${\color{red}putchar}$$ function (every other function ($${\color{red}printf}$$, $${\color{red}puts}$$, etc…) is forbidden)
  * All your code should be in the $${\color{red}main}$$ function
  * You can only use $${\color{red}putchar}$$ three times in your code
  ```
  #include <stdio.h>


  int main(void)
  {
  	char alphabet;
  
  	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
  	{
  		putchar(alphabet);
  	}
  
  	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
  	{
  		putchar(alphabet);
  	}
  	putchar('\n');
  
  	return (0);
  }
  ```
  
* [Task 4](./4-print_alphabt.c): Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except $${\color{red}q}$$ and $${\color{red}e}$$
You can only use the $${\color{red}putchar}$$ function (every other function ($${\color{red}printf}$$, $${\color{red}puts}$$, etc…) is forbidden)
All your code should be in the $${\color{red}main}$$ function
You can only use $${\color{red}putchar}$$ twice in your code
  ```
  #include <stdio.h>

  int main(void)
  {
  	char alphabet;
  
  	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
  	{
  		if (alphabet != 'e' && alphabet != 'q')
  		{
  			putchar(alphabet);
  		}
  	}
  	putchar('\n');
  
  	return (0);
  }
  ```
  
* [Task 5](./5-print_numbers.c): Write a program that prints all single digit numbers of base 10 starting from $${\color{red}0}$$, followed by a new line.

  * All your code should be in the $${\color{red}main}$$ function
  ```
  #include <stdio.h>

  int main(void)
  {
  	char digits;
  
  	for (digits = '0'; digits <= '9'; digits++)
  	{
  		putchar(digits);
  	}
  	putchar('\n');
  
  	return (0);
  }
  ```
  
* [Task 6](./6-print_numberz.c): Write a program that prints all single digit numbers of base 10 starting from $${\color{red}0}$$, followed by a new line.

  * You are not allowed to use any variable of type $${\color{red}char}$$
  * You can only use the $${\color{red}putchar}$$ function (every other function ($${\color{red}printf}$$, $${\color{red}puts}$$, etc…) is forbidden)
  * You can only use $${\color{red}putchar}$$ twice in your code
  * All your code should be in the $${\color{red}main}$$ function
  ```
  #include <stdio.h>

  int main(void)
  {
  	int digits;
  
  	for (digits = 48; digits <= 57; digits++)
  	{
  		putchar(digits);
  	}
  	putchar('\n');
  
  	return (0);
  }
  ```
  
* [Task 7](./7-print_tebahpla.c): Write a program that prints the lowercase alphabet in reverse, followed by a new line.

  * You can only use the $${\color{red}putchar}$$ function (every other function ($${\color{red}printf}$$, $${\color{red}puts}$$, etc…) is forbidden)
  * All your code should be in the $${\color{red}main}$$ function
  * You can only use $${\color{red}putchar}$$ twice in your code
  ```
  #include <stdio.h>

  int main(void)
  {
  	char alphabet;
  
  	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
  	{
  		putchar(alphabet);
  	}
  	putchar('\n');
  
  	return (0);
  }
  ```
  
* [Task 8](./8-print_base16.c): Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

  * You can only use the $${\color{red}putchar}$$ function (every other function ($${\color{red}printf}$$, $${\color{red}puts}$$, etc…) is forbidden)
  * All your code should be in the *main* function
  * You can only use *putchar* three times in your code
  ```
  #include <stdio.h>

  int main(void)
  {
  	char base16;
  
  	for (base16 = '0'; base16 <= '9'; base16++)
  	{
  		putchar(base16);
  	}
  	for (base16 = 'a'; base16 <= 'f'; base16++)
  	{
  		putchar(base16);
  	}
  	putchar('\n');
  
  	return (0);
  }
  ```
  
* [Task 9](./9-print_comb.c): Write a program that prints all possible combinations of single-digit numbers.

  * Numbers must be separated by $${\color{red},}$$, followed by a space
  * Numbers should be printed in ascending order
  * You can only use the $${\color{red}putchar}$$ function (every other function ($${\color{red}printf}$$, $${\color{red}puts}$$, etc…) is forbidden)
  * All your code should be in the $${\color{red}main}$$ function
  * You can only use $${\color{red}putchar}$$ four times maximum in your code
  * You are not allowed to use any variable of type $${\color{red}char}$$
  ```
  #include <stdio.h>

  int main(void)
  {
  	char digits;
  
  	for (digits = '0'; digits <= '9'; digits++)
  	{
  		putchar(digits);
  	if (digits != '9')
  	{
  	putchar(',');
  	putchar(' ');
  	}
  
  	}
  	putchar('\n');
  
  	return (0);
  }
  ```
  
### By Anthony Goutieras
  Weekly project from 10/10/25 to 19/10/25 for Holberton School Bordeaux
