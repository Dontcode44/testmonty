#include "monty.h"
/**
 * add_new_node - Adds a new node at the top
 *
 * @head: head of the double linked list
 * @data_node: value to insert in new node
 * Return: new node
 */
stack_t *add_new_node(stack_t **head, int data_node)
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(*head), fclose(fileopen);
		exit(EXIT_FAILURE);
	}

	new_node->n = data_node;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}