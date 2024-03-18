#include "../headers/push_swap.h"

void	print_stack(t_stack *a)
{
	while (a)
	{
		printf("val---> %d || index----> %d\n", (a)->val, a->index);
		a = (a)->next;
	}
}
int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*tmp;


	a = NULL;
	b = NULL;
	if (ac < 2 || (ac == 2 && !av[1][0]))
		return (0);
	arg_split(ac, av, &a);
	tmp = a;
	if (parsing(a) == 0)
		return (0);
	main_sort(&a, &b);
	print_stack(b);
	
}
