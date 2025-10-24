
# C - C - Variables, if, else, while

* [Task 0](./0-positive_or_negative.c): 
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

* [Task 1](./1-last_digit.c): 
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
* [Task 2](./2-print_alphabet.c): 
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
  
* [Task 3](./3-print_alphabets.c): 
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
  
* [Task 4](./4-print_alphabt.c): 
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
  
* [Task 5](./5-print_numbers.c): 
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
  
* [Task 6](./6-print_numberz.c): 
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
  
* [Task 7](./7-print_tebahpla.c): 
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
  
* [Task 8](./8-print_base16.c): 
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
  
* [Task 9](./9-print_comb.c): 
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
