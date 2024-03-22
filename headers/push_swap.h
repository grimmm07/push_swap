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
void				ss(t_stack **stack_a, t_stack **stack_b);
void				pa(t_stack **stack_a, t_stack **stack_b);
void				pb(t_stack **stack_a, t_stack **stack_b);
void				sa(t_stack **stack_a);
void				sb(t_stack **stack_b);

// instructions_2
void				rr(t_stack **stack_a, t_stack **stack_b);
void				ra(t_stack **stack_a);
void				rb(t_stack **stack_b);

// instructions_3
void				rrr(t_stack **stack_a, t_stack **stack_b);
void				rra(t_stack **stack_a);
void				rrb(t_stack **stack_b);

// parsing
void				arg_split(int ac, char **av, t_stack **stack_a);
int					parsing(t_stack *stack_a);

// utils
int					linkedlist_size(t_stack **stack);
int					is_sorted(t_stack **stack_a);
int					check_digit(char *arr);

// utils_2
void				themin_to_thetop(t_stack **stack_a, t_stack **stack_b);
int					look_for_themax_indice(t_stack **lst);
int					look_for_themax(t_stack **lst);
int					look_for_themin(t_stack **lst);
void				indexing(t_stack **lst);
void				ft_putstr(char *str);

// utils_2
int	ft_free_arr(char **s, int len);
int ft_strlenplus(char **str);
void    ft_free_li(t_stack *stack);

// utils_sort
void				get_chunk(t_stack **stack_a, t_stack **stack_b, int *arr);
int					*conv_linkto_arr(t_stack **stack_a);
int					*sort_arr(int *arr, int index);

//	utils_sort_2
void				sort_stack(t_stack **stack_a, t_stack **stack_b);

// linkedlist
t_stack				**ft_lstadd_front(t_stack **lst, int content);
t_stack				*ft_lstnew(int content);

// sort
void				sort_5_extra(t_stack **stack_a, t_stack **stack_b);
void				sort_prime(t_stack **stack_a, t_stack **stack_b);
void				main_sort(t_stack **stack_a, t_stack **stack_b);
void				sort_4(t_stack **stack_a, t_stack **stack_b);
void				sort_2(t_stack **stack);
void				sort_3(t_stack **stack);

void				print_stack(t_stack *a);

#endif