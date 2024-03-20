#include "../headers/push_swap.h"

void	sa(t_stack **stack_a)
{
	int	tmp;

	if (linkedlist_size(stack_a) >= 2)
	{
		tmp = (*stack_a)->val;
		(*stack_a)->val = (*stack_a)->next->val;
		(*stack_a)->next->val = tmp;
		printf("sa\n");
	}
}

void	sb(t_stack **stack_b)
{
	int	tmp;

	if (linkedlist_size(stack_b) >= 2)
	{
		tmp = (*stack_b)->val;
		(*stack_b)->val = (*stack_b)->next->val;
		(*stack_b)->next->val = tmp;
		printf("sb\n");
	}
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (linkedlist_size(stack_a) >= 2 && linkedlist_size(stack_b) >= 2)
	{
		sa(stack_a);
		sb(stack_b);
		printf("ss\n");
	}
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*new;
	t_stack	*tmp;

	if (!(*stack_b) || stack_b == NULL)
		return ;
	tmp = (*stack_b);
	new = ft_lstnew((*stack_b)->val);
	new->next = (*stack_a);
	(*stack_a) = new;
	(*stack_b) = (*stack_b)->next;
	printf("pa\n");
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*new;
	t_stack	*tmp;

	if (!(*stack_a) || stack_a == NULL)
		return ;
	tmp = (*stack_a);
	new = ft_lstnew((*stack_a)->val);
	new->next = (*stack_b);
	(*stack_b) = new;
	(*stack_a) = (*stack_a)->next;
	printf("pb\n");
}
