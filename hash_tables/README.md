<a href="#"><img src="https://img.shields.io/badge/-006CAF.svg?style=for-the-badge&logo=c&logoColor=white" /></a>
[![Holberton](https://img.shields.io/badge/Holberton-E31C3F.svg?style=for-the-badge)](https://www.holbertonschool.fr/)

# C - Hash tables

## **[0. >>> ht = {}](0-hash_table_create.c)**

Write a function that creates a hash table.

* Prototype: ```hash_table_t *hash_table_create(unsigned long int size);```
    * where ```size``` is the size of the array
* Returns a pointer to the newly created hash table
* If something went wrong, your function should return ```NULL```

<details>
<summary>Show answer</summary>

```bash
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 *
 * Return: Pointer to the newly created hash table.
 *         Returns NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int index;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;

	for (index = 0; index < size; index++)
		ht->array[index] = NULL;

	return (ht);
}
```
</details>

---

## **[1. djb2](1-djb2.c)**

Write a hash function implementing the djb2 algorithm.

* Prototype: ```unsigned long int hash_djb2(const unsigned char *str);```
* You are allowed to copy and paste the function from [this page](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)

<details>
<summary>Show answer</summary>

```bash
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
```
</details>

---

## **[2. key -> index](2-key_index.c)**

Write a function that gives you the index of a key.

* Prototype: ```unsigned long int key_index(const unsigned char *key, unsigned long int size);```
    * where ```key``` is the key
    * and ```size``` is the size of the array of the hash table
* This function should use the ```hash_djb2``` function that you wrote earlier
* Returns the index at which the key/value pair should be stored in the array of the hash table
* You will have to use this hash function for all the next tasks

<details>
<summary>Show answer</summary>

```bash
#include "hash_tables.h"

/**
 * key_index -  gives the index of a key.
 * @key: key to get the index of.
 * @size: size of the array.
 *
 * Return:  Index at which the key/value pair should be stored
 *          in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
```
</details>

---

  ### By Anthony Goutieras
  Weekly project from 17/11/25 to 05/12/25 for Holberton School Bordeaux
