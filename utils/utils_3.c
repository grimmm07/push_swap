#include "../headers/push_swap.h"


int ft_strlenplus(char **str)
{
    int index;

    index = 0;
    while (str[index])
        index++;
    return (index);
}

int	ft_free_arr(char **s, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

void    ft_free_li(t_stack *stack)
{
    int index;

    index = linkedlist_size(&stack);
    while (index >= 0 && stack->next)
    {
        stack = stack->next;
        free(stack);
        index--;
    }
}