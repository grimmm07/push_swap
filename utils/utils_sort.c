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
		while (y < index)
		{
			if (arr[i] > arr[y])
			{
				tmp = arr[i];
				arr[i] = arr[y];
				arr[y] = tmp;
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
	if (size >= 6 && size <= 16)
		return (3);
	else if (size > 100 && size <= 500)
		return (45);
	else
		return (50);
}

void	increment(int *start, int *end, int size_arr)
{
	if ((*start) < (*end))
		(*start)++;
	if (*end <= size_arr - 1)
		(*end)++;
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
	end = get_range(stack_a);
	while ((*stack_a))
	{
		if (tmp->val <= arr[start])
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			increment(&start, &end, size_arr);
		}
		else if (tmp->val <= arr[end])
		{
			pb(stack_a, stack_b);
			if (linkedlist_size(stack_b) >= 2 && (*stack_b)->val < (*stack_b)->next->val)
			{
				printf("---> %d ----->stack val %d", arr[end], (*stack_b)->val);
				sb(stack_b);
			}
			increment(&start, &end, size_arr);
		}
		else
			ra(stack_a);
	}
}
