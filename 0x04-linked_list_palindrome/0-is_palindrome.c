#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the head of the list
 * Return: 1 if it is a palindrome, 0 if it is not
 */

int is_palindrome(listint_t **head)
{

/* return 1 because the list is Null */
if (!head || !*head)
return (1);

/* use the helper function to solve all of my problems, like a true millenial */
return (racecar_bob(head, *head));
}


/**
 * racecar_bob - checks if a singly linked list is a palindrome
 * @head: pointer to the head of the list
 * @level: pointer to the current node
 * Return: 1 if it is a palindrome, 0 if it is not
 */

int racecar_bob(listint_t **head, listint_t *level)
{

if (!level)
return (1);

/* recursively loop through the list to compare values */
if (racecar_bob(head, level->next) && (*head)->n == level->n)
{
*head = (*head)->next;
return (1);
}

/* womp womp womp */
return (0);
}
