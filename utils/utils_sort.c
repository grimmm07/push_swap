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

int	get_chunk(t_stack **stack_a, int *arr)
{
	int		i;
	int		j;
	int		y;
	t_stack	*tmp;

	i = 0;
	tmp = *stack_a;
	j = i + 2;
	y = 0;
	while (i <= linkedlist_size(stack_a) && y < 3)
	{
		if (tmp->val == arr[i])
			return (1);
		tmp = tmp->next;
		if (linkedlist_size(stack_a) != y)
			i++;
		else
			i--;
	}
	return (0);
}
