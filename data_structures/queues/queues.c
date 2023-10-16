#include <stdio.h>
#include <stdlib.h>
#include "queues.h"

/**
 * is_empty - check if a queue is empty
 *
 * @head: head of queue to check
 *
 * Return: 0 if empty, 1 if not
 */
int is_empty(queue_t **head)
{
	if (*head == NULL)
		return (0);
	return (1);
}

/**
 * create_node - create a queue node
 *
 * @head: head of queue to check
 *
 * Return: new node
 */
queue_t *create_node(int value)
{
	queue_t *node;

	node = malloc(sizeof(queue_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->next = NULL;
	return (node);
}

/**
 * insert_node - insert a node into a queue
 *
 * @head: head of queue to check
 * @node: node to insert
 *
 * Return: added node
 */
queue_t *insert_node(queue_t **head, queue_t *node)
{
	queue_t *tmp;

	if (*head == NULL)
	{
		*head = node;
	}

	tmp = *head;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			tmp->next = node;
			return (node);
		}
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * remove_node - remove node off a queue
 *
 * @head: head of the queue to check
 *
 * Return: removed node
 */
queue_t *remove_node(queue_t **head)
{
	queue_t *tmp;

	tmp = *head;
	*head = tmp->next;
	return (tmp);
}
