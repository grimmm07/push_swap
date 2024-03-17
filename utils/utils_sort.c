#include "../headers/push_swap.h"

int *conv_linkto_arr(t_stack **stack_a)
{
    int *arr;
    t_stack *tmp;
    int index;

    tmp = *stack_a;
    arr = malloc(sizeof(int) * linkedlist_size(stack_a));
    while (tmp)
    {
        arr[index] = tmp->val;
        tmp = tmp->next;
        index++;
    }
    return (arr);
}