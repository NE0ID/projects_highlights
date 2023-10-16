#ifndef __QUEUE_H__
#define __QUEUE_H__

/**
 * struct queue_s - queue structure
 *
 * @head: head of queue
 * @n: value of node
 * @next: pointer to the next node
 * @tail: tail of queue
 */
typedef struct queue_s
{
	struct queue_s **head;
	int n;
	struct queue_s *next;
	struct queue_s *tail;
} queue_t;

/* Prototype */
int is_empty(queue_t **head);
queue_t *create_node(int value);
queue_t *add_node(queue_t **head, queue_t *node);
queue_t *remove_node(queue_t **head);

#endif /*__QUEUE_H__*/
