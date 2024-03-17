#include "../headers/push_swap.h"

void	sort_5_extra(t_stack **stack_a, t_stack **stack_b)
{
	if (look_for_themin(stack_a) == 3)
	{
		themin_to_thetop(stack_a, stack_b);
		sort_4(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	else if (look_for_themin(stack_a) == 4)
	{
		themin_to_thetop(stack_a, stack_b);
		sort_4(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}

void	sort_6(t_stack **stack_a, t_stack **stack_b)
{
	int *arr;

	arr = conv_linkto_arr(stack_a);
	
}