#include "../headers/push_swap.h"

int	*conv_linkto_arr(t_stack **stack_a)
{
	int		*arr;
	t_stack	*tmp;
	int		index;

	tmp = *stack_a;
	index = 0;
	arr = (int *)malloc(sizeof(int) * linkedlist_size(stack_a));
	while (tmp)
	{
		arr[index] = tmp->val;
		tmp = tmp->next;
		index++;
	}
	arr = sort_arr(arr, index);
	return (arr);
}

int	*sort_arr(int *arr, int index)
{
	int	y;
	int	i;
	int	tmp;

	while (i < index)
	{
		y = i + 1;
		while (y > 0)
		{
			if (arr[index] > arr[y])
			{
				tmp = arr[index];
				arr[index] = arr[y];
				arr[y] = arr[index];
			}
			y++;
		}
		i++;
	}
	return (arr);
}

int	get_range(t_stack **stack_a)
{
	int	size;

	size = linkedlist_size(stack_a);
	if (size >= 6 && size <= 100)
		return (15);
	else if (size > 100 && size <= 500)
		return (45);
	else
		return (50);
}

void	increment(int *start, int *end, int *size_arr)
{
	if ((*start) < (*end))
		(*start)++;
	(*start)++;
	if (end < size_arr - 1)
		end++;
}

void	get_chunk(t_stack **stack_a, t_stack **stack_b, int *arr)
{
	int		start;
	int		end;
	t_stack	*tmp;
	int		size_arr;

	start = 0;
	size_arr = linkedlist_size(stack_a);
	tmp = *stack_a;
	end = get_range(stack_a) - 1;
	while (tmp)
	{
		if (tmp->val <= arr[start])
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			increment(&start, &end, &size_arr);
		}
		else if (tmp->val <= arr[end])
		{
			pb(stack_a, stack_b);
			if ((*stack_b)->val < (*stack_b)->next->val)
				sb(stack_b);
			increment(&start, &end, &size_arr);
		}
		else
			ra(stack_a);
		tmp = tmp->next;
	}
}
