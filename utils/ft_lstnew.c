#include "../headers/push_swap.h"
#include <stdio.h>

t_stack	*ft_lstnew(int content)
{
	t_stack *new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	new_node->val = content;
	new_node->next = NULL;
    return (new_node);
}