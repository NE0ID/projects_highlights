#include <stdio.h>
#include <stdlib.h>
#include "stacks.h"

/**
 * is_empty - check if a stack is empty
 *
 * @head: head of stack to check
 *
 * Return: 0 if empty, 1 if not
 */
int is_empty(stack_t **head)
{
	if (*head == NULL)
		return (0);
	return (1);
}
/**
 * create_node - create a stack node
 *
 * @value: value of node to be created
 *
 * Return: new node
 */
stack_t *create_node(int value)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->next = NULL;
	return (node);
}

/**
 * push_stack - insert node into a stack
 *
 * @head: stack to check
 * @node: node to insert
 *
 * Return: inserted node
 */
stack_t *push_stack(stack_t **head, stack_t *node)
{
	stack_t *tmp;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	tmp = *head;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			tmp->next = node;
			return (tmp);
		}
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * pop_stack - remove a node off a stack
 *
 * @head: head of stack to check
 *
 * Return: removed node
 */
stack_t *pop_stack(stack_t **head)
{
	stack_t *tmp;
	stack_t *curr;

	curr = *head;
	while (curr)
	{
		if (curr->next->next == NULL)
		{
			tmp = curr->next;
			curr->next = NULL;
			return (tmp);
		}
	}
	return (NULL);
}
