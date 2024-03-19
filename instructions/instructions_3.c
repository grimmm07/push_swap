#include "../headers/push_swap.h"

void	rra(t_stack **stack_a)
{
	t_stack	*tmp_last;
	t_stack	*tmp_head;
	t_stack	*tmp_newl;

	printf("rra\n");
	tmp_head = *stack_a;
	tmp_last = *stack_a;
	while (tmp_last->next)
	{
		tmp_newl = tmp_last;
		tmp_last = tmp_last->next;
	}
	tmp_newl->next = NULL;
	tmp_last->next = *stack_a;
	*stack_a = tmp_last;
	indexing(stack_a);
}

void	rrb(t_stack **stack_b)
{
	t_stack	*tmp_last;
	t_stack	*tmp_head;
	t_stack	*tmp_newl;

	printf("rrb\n");
	tmp_head = *stack_b;
	tmp_last = *stack_b;
	while (tmp_last->next)
	{
		tmp_newl = tmp_last;
		tmp_last = tmp_last->next;
	}
	tmp_newl->next = NULL;
	tmp_last->next = *stack_b;
	*stack_b = tmp_last;
	indexing(stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	printf("rrr\n");
	rra(stack_a);
	rrb(stack_b);
}
