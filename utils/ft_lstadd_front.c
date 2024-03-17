#include "../headers/push_swap.h"

t_stack	**ft_lstadd_front(t_stack **lst, int content)
{
	t_stack	*new;
	t_stack	*last;

	new = ft_lstnew(content);
	if (*lst == NULL)
	{
		*lst = new;
		return (lst);
	}
	last = (*lst);
	while (last->next)
		last = last->next;
	last->next = new;
	return (lst);
}
