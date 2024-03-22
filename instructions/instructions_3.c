#include "../headers/push_swap.h"

void	rra(t_stack **stack_a)
{
	t_stack	*tmp_last;
	t_stack	*tmp_newl;

	if (linkedlist_size(stack_a) < 2)
		return ;
	tmp_last = *stack_a;
	while (tmp_last->next)
	{
		tmp_newl = tmp_last;
		tmp_last = tmp_last->next;
	}
	tmp_newl->next = NULL;
	tmp_last->next = *stack_a;
	*stack_a = tmp_last;
	ft_putstr("rra\n");
}

void	rrb(t_stack **stack_b)
{
	t_stack	*tmp_last;
	t_stack	*tmp_newl;

	if (linkedlist_size(stack_b) < 2)
		return ;
	tmp_last = *stack_b;
	while (tmp_last->next)
	{
		tmp_newl = tmp_last;
		tmp_last = tmp_last->next;
	}
	tmp_newl->next = NULL;
	tmp_last->next = *stack_b;
	*stack_b = tmp_last;
	ft_putstr("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_putstr("rrr\n");
}
