#include "../headers/push_swap.h"

void	ra(t_stack **stack_a)
{
	t_stack	*last;
	t_stack	*tmp;

	printf("ra\n");
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
	t_stack	*last;
	t_stack	*tmp;

	printf("rb\n");
	tmp = (*stack_b)->next;
	last = *stack_b;
	while (last->next)
		last = last->next;
	last->next = (*stack_b);
	last->next->next = NULL;
	(*stack_b) = tmp;
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	printf("rr\n");
	ra(stack_a);
	rb(stack_b);
}
