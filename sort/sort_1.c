#include "../headers/push_swap.h"


void	sort_2(t_stack **stack)
{
	int index;
	if (look_for_themax(stack) == 0)
		sa(stack);
}

void	sort_3(t_stack **stack)
{
	int index;

	if (look_for_themax(stack) == 0)
		ra(stack);
	if (look_for_themax(stack) == 1)
	{
		sa(stack);
		ra(stack);
	}
	if ((*stack)->val > (*stack)->next->val)
		sa(stack);
}

void	sort_4(t_stack **stack_a, t_stack **stack_b)
{
	if (look_for_themin(stack_a) == 0)
	{
		pb(stack_a, stack_b);
		sort_3(stack_a);
		pa(stack_a, stack_b);
	}
	else if (look_for_themin(stack_a) == 1)
	{
		themin_to_thetop(stack_a, stack_b);
		sort_3(stack_a);
		pa(stack_a, stack_b);
	}
	else if (look_for_themin(stack_a) == 2)
	{
		themin_to_thetop(stack_a, stack_b);
		sort_3(stack_a);
		pa(stack_a, stack_b);
	}
	else if (look_for_themin(stack_a) == 3)
	{
		themin_to_thetop(stack_a, stack_b);
		sort_3(stack_a);
		pa(stack_a, stack_b);
	}
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	if (look_for_themin(stack_a) == 0)
	{
		pb(stack_a, stack_b);
		sort_4(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	else if (look_for_themin(stack_a) == 1)
	{
		themin_to_thetop(stack_a, stack_b);
		sort_4(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	else if (look_for_themin(stack_a) == 2)
	{
		themin_to_thetop(stack_a, stack_b);
		sort_4(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	sort_5_extra(stack_a, stack_b);
}

void	main_sort(t_stack **stack_a, t_stack **stack_b)
{
	if (linkedlist_size(stack_a) == 2)
		sort_2(stack_a);
	else if (linkedlist_size(stack_a) == 3)
		sort_3(stack_a);
	else if (linkedlist_size(stack_a) == 4)
		sort_4(stack_a, stack_b);
	else if (linkedlist_size(stack_a) == 5)
		sort_5(stack_a, stack_b);
	else
		sort_prime(stack_a, stack_b);

	indexing(stack_a);
}
