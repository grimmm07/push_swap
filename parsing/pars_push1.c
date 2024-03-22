#include "../headers/push_swap.h"

void	arg_split(int ac, char **av, t_stack **stack_a)
{
	int		index;
	char	**arr;
	int		y;

	index = 1;
	while (index < ac)
	{
		y = 0;
		arr = ft_split(av[index], 32);
		while (arr[y])
		{
			if (check_digit(arr[y]) == 0)
				exit(0);
			stack_a = ft_lstadd_front(stack_a, ft_atoi(arr[y]));
			y++;
		}
		ft_free_arr(arr , y);
		index++;
	}
	indexing(stack_a);
}

int	check_dup(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*head;

	head = *stack_a;
	while (head)
	{
		tmp = (head)->next;
		while (tmp)
		{
			if (tmp->val == (head)->val)
				return (0);
			tmp = tmp->next;
		}
		head = head->next;
	}
	return (1);
}

int	parsing(t_stack *stack_a)
{
	if (!check_dup(&stack_a))
		return (0);
	if (is_sorted(&stack_a) == 1)
		return (0);
	return (1);
}
