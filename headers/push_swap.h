#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

// linkedlist struct
typedef struct s_stack
{
	int				val;
	int				index;
	struct s_stack	*next;
}					t_stack;

// instructions_1
void				sa(t_stack **stack_a);
void				sb(t_stack **stack_b);
void				ss(t_stack **stack_a, t_stack **stack_b);
void				pa(t_stack **stack_a, t_stack **stack_b);
void				pb(t_stack **stack_a, t_stack **stack_b);

// instructions_2
void				ra(t_stack **stack_a);
void				rb(t_stack **stack_b);
void				rr(t_stack **stack_a, t_stack **stack_b);

// instructions_3
void				rra(t_stack **stack_a);
void				rrb(t_stack **stack_b);
void				rrr(t_stack **stack_a, t_stack **stack_b);

// parsing
void				arg_split(int ac, char **av, t_stack **stack_a);
int					parsing(t_stack *stack_a);

// utils
int					linkedlist_size(t_stack **stack);
int					check_digit(char *arr);
int					is_sorted(t_stack **stack_a);

// utils_2
void				indexing(t_stack **lst);
int					look_for_themax(t_stack **lst);
int					look_for_themin(t_stack **lst);
void				themin_to_thetop(t_stack **stack_a, t_stack **stack_b);

// linkedlist
t_stack				**ft_lstadd_front(t_stack **lst, int content);
t_stack				*ft_lstnew(int content);

// sort
void				main_sort(t_stack **stack_a, t_stack **stack_b);
void				sort_2(t_stack **stack);
void				sort_3(t_stack **stack);
void				sort_4(t_stack **stack_a, t_stack **stack_b);
void				sort_5_extra(t_stack **stack_a, t_stack **stack_b);

#endif