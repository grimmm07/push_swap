#include "../headers/push_swap.h"

int	look_for_themin(t_stack **lst)
{
	t_stack	*head;
	int		min;
	int		indice;

	head = *lst;
	min = head->val;
	indice = 0;
	while (head)
	{
		if (head->val < min)
		{
			min = head->val;
			indice = head->index;
		}
		head = head->next;
	}
	return (indice);
}

int	look_for_themax_indice(t_stack **lst)
{
	t_stack	*head;
	int		indice;
	int		max;

	head = *lst;
	max = 0;
	indice = 0;
	while (head)
	{
		if (head->val > max)
		{
			max = head->val;
			indice = head->index;
		}
		head = head->next;
	}
	return (indice);
}

int	look_for_themax(t_stack **lst)
{
	t_stack	*head;
	int		max;

	head = *lst;
	max = 0;
	while (head)
	{
		if (head->val > max)
			max = head->val;
		head = head->next;
	}
	return (max);
}

void	themin_to_thetop(t_stack **stack_a, t_stack **stack_b)
{
	if (look_for_themin(stack_a) == 1)
		sa(stack_a);
	if (look_for_themin(stack_a) == 2)
	{
		rra(stack_a);
		rra(stack_a);
	}
	if (look_for_themin(stack_a) == 3)
		rra(stack_a);
	if (look_for_themin(stack_a) == 4)
		rra(stack_a);
	pb(stack_a, stack_b);
	indexing(stack_a);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
}
