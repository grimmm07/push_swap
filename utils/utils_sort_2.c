#include "../headers/push_swap.h"

void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	int	index;

	while (*stack_b)
	{
		index = look_for_themax_indice(stack_b);
		if (index < linkedlist_size(stack_b) / 2)
		{
			while (*stack_b && (*stack_b)->val != look_for_themax(stack_b))
				rb(stack_b);
			pa(stack_a, stack_b);
		}
		else if (index >= linkedlist_size(stack_b) / 2)
		{
			while (*stack_b && (*stack_b)->val != look_for_themax(stack_b))
				rrb(stack_b);
			pa(stack_a, stack_b);
		}
		indexing(stack_b);
		indexing(stack_a);
	}
	print_stack(*stack_a);
}
