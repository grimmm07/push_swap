#include "../headers/push_swap.h"

int ft_count_pars(int ac, char **av)
{
    int index;
    int y;
    int count;

    index = 1;
    count = 0;
    while(index < ac)
    {
        y = 0;
        while (av[index][y])
        {
            if(av[index][y + 1] && av[index][y] == 32 && av[index][y + 1] != 32)
                count += 1;
            y++;
        }
        if (av[index])
            count++;
        index++;
    }
    return (count);
}

int linkedlist_size(t_stack **stack)
{
    int index;
    t_stack *tmp;

    index = 0;
    tmp = *stack;
    while (tmp)
    {
        tmp = (tmp)->next;
        index++;
    }
    return (index);
}

int check_digit(char *arr)
{
    int index;
    int y;

    index = 0;
    while (arr[index])
    {
        if(ft_isdigit(arr[index]) == 0)
           return (0);
        index++;
    }
    return (1);
}

int is_sorted(t_stack **stack_a)
{
    t_stack *tmp;
    t_stack *head;

    head = *stack_a;
    while (head)
    {
        tmp = (head);
        while (tmp->next)
        {
            
            if (tmp->val > tmp->next->val)        
                return (0);
            tmp = tmp->next;
        }
        head = (head)->next;
    }
    return (1);
}
