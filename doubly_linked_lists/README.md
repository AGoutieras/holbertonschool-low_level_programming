<a href="#"><img src="https://img.shields.io/badge/-006CAF.svg?style=for-the-badge&logo=c&logoColor=white" /></a>
[![Holberton](https://img.shields.io/badge/Holberton-E31C3F.svg?style=for-the-badge)](https://www.holbertonschool.fr/)

# C - Doubly linked lists

## **[0. Print list](0-print_dlistint.c)**

Write a function that prints all the elements of a ```dlistint_t``` list.

* Prototype: ```size_t print_dlistint(const dlistint_t *h);```
* Return: the number of nodes

<details>
<summary>Show answer</summary>

```bash
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: current element of the list
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
```
</details>

---

## **[1. List length](1-dlistint_len)**

Write a function that returns the number of elements in a linked ```dlistint_t``` list.

* Prototype: ```size_t dlistint_len(const dlistint_t *h);```

<details>
<summary>Show answer</summary>

```bash
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Current element of the list
 *
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
```
</details>

---

## **[2. Add node](2-add_dnodeint.c)**

Write a function that adds a new node at the beginning of a ```dlistint_t``` list.

* Prototype: ```dlistint_t *add_dnodeint(dlistint_t **head, const int n);```
* Return: the address of the new element, or ```NULL``` if it failed

<details>
<summary>Show answer</summary>

```bash
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: First node of the list.
 * @n: element to add
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
```
</details>

---

## **[3. Add node at the end](3-add_dnodeint_end.c)**

Write a function that adds a new node at the end of a ```dlistint_t``` list.

* Prototype: ```dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);```
* Return: the address of the new element, or ```NULL``` if it failed

<details>
<summary>Show answer</summary>

```bash
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the beginning of a dlistint_t list.
 * @head: First node of the list.
 * @n: element to add
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
	}

	return (new_node);
}
```
</details>

---

## **[4. Free list](4-free_dlistint.c)**

Write a function that frees a ```dlistint_t``` list.

* Prototype: ```void free_dlistint(dlistint_t *head);```

<details>
<summary>Show answer</summary>

```bash
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the beginning of a dlistint_t list.
 * @head: First node of the list.
 * @n: element to add
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
	}

	return (new_node);
}
```
</details>

---

## **[5. Get node at index](5-get_dnodeint.c)**

Write a function that returns the nth node of a ```dlistint_t``` linked list.

* Prototype: ```dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);```
* where ```index``` is the index of the node, starting from ```0```
* if the node does not exist, return ```NULL```

<details>
<summary>Show answer</summary>

```bash
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: First node of the list.
 * @index: index of the node.
 *
 * Return: NULL if there is no node, located node otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos;
	dlistint_t *current;

	for (current = head, pos = 0; pos < index; current = current->next, pos++)
	{
		if (current == NULL)
			return (NULL);
	}

	return (current);
}
```
</details>

---

## **[6. Sum list](6-sum_dlistint.c)**

Write a function that returns the sum of all the data (n) of a ```dlistint_t``` linked list.

* Prototype: ```int sum_dlistint(dlistint_t *head);```
* if the list is empty, return ```0```

<details>
<summary>Show answer</summary>

```bash
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 *				  of a dlistint_t linked list.
 * @head: First node of the list.
 *
 * Return: Sum of all the data (n) of a dlistint_t linked list.
 *         If the list is empty, return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
```
</details>

---

## **[7. Insert at index](7-insert_dnodeint.c)**

Write a function that inserts a new node at a given position.

* Prototype: ```dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);```
* where ```idx``` is the index of the list where the new node should be added. Index starts at ```0```
* Returns: the address of the new node, or ```NULL``` if it failed
* if it is not possible to add the new node at index ```idx```, do not add the new node and return ```NULL```

Your files ```2-add_dnodeint.c``` and ```3-add_dnodeint_end.c``` will be compiled during the correction

<details>
<summary>Show answer</summary>

```bash
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the list
 * @idx: index to get where the node is added
 * @n: node to add
 *
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}


	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
```
</details>

---

## **[8. Delete at index](8-delete_dnodeint.c)**

Write a function that deletes the node at index ```index``` of a ```dlistint_t``` linked list.

* Prototype: ```int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);```
* where ```index``` is the index of the node that should be deleted. Index starts at 0```
* Returns: ```1``` if it succeeded, ```-1``` if it failed

<details>
<summary>Show answer</summary>

```bash
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 *							  of a dlistint_t linked list.
 * @head: head of the list
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

	if (temp == NULL)
		return (-1);

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);

	return (1);
}
```
</details>

---

  ### By Anthony Goutieras
  Weekly project from 01/12/25 to 05/12/25 for Holberton School Bordeaux
