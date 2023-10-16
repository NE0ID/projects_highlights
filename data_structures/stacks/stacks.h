#ifndef __STACK_H__
#define __STACK_H__

/**
 * struct stack_s - stack structure
 *
 * @head: beginning of a stack
 * @n: value of node
 * @next: pointer to the next node
 */
typedef struct stack_s
{
	struct stack_s **head;
	int n;
	struct stack_s *next;
} stack_t;

/* Prototypes */
int is_empty(stack_t **head);
stack_t *create_node(int value);
stack_t *push_stack(stack_t **head, stack_t *node);
stack_t *pop_stack(stack_t **head);

#endif /*__STACK_H__*/
