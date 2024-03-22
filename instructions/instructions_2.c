#include "../headers/push_swap.h"

void	ra(t_stack **stack_a)
{
	t_stack	*last;
	t_stack	*tmp;

	if (linkedlist_size(stack_a) < 1)
		return;
	tmp = (*stack_a)->next;
	last = *stack_a;
	while (last->next)
		last = last->next;
	last->next = (*stack_a);
	last->next->next = NULL;
	(*stack_a) = tmp;
	ft_putstr("ra\n");
}

void	rb(t_stack **stack_b)
{
	t_stack	*last;
	t_stack	*tmp;

	if (linkedlist_size(stack_b) < 1)
		return;
	tmp = (*stack_b)->next;
	last = *stack_b;
	while (last->next)
		last = last->next;
	last->next = (*stack_b);
	last->next->next = NULL;
	(*stack_b) = tmp;
	ft_putstr("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_putstr("rr\n");
}
