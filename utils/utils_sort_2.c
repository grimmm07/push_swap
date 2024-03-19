#include "../headers/push_swap.h"

void    sort_stack(t_stack **stack_a, t_stack **stack_b)
{
    int index;

    index = 0;
    look_for_themax(stack_b, &index);
    while (*stack_b)
    {
        if (index < linkedlist_size(stack_b) / 2)
        {
            while (*stack_b && (*stack_b)->val != look_for_themax(stack_b,&index))
                ra(stack_b);
            pa(stack_a, stack_b);
        }
        else if (index >= linkedlist_size(stack_b) / 2)
        {
            while (*stack_b && (*stack_b)->val != look_for_themax(stack_b, &index))
                    rra(stack_b);
            pa(stack_a, stack_b);
        }
    }
}