#include "../headers/push_swap.h"


void	ra(t_stack **stack_a)
{
	t_stack *last;
	t_stack *tmp;

	tmp = (*stack_a)->next;
	last = *stack_a;
	while (last->next)
		last = last->next;
	last->next = (*stack_a);
	last->next->next = NULL;
	(*stack_a) = tmp;
}

void	rb(t_stack **stack_b)
{
	t_stack *tmp;

	tmp = (*stack_b);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = (*stack_b);
	tmp->next = NULL;
	(*stack_b) = (*stack_b)->next;
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
