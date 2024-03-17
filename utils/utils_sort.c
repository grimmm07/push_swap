#include "../headers/push_swap.h"

int *conv_linkto_arr(t_stack **stack_a)
{
    int *arr;
    t_stack *tmp;
    int index;

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

int *sort_arr(int *arr, int index)
{
    int y;
    int tmp;

    while (index > 0)
    {
        y = index + 1;
        while (y > 0)
        {
            if (arr[index] > arr[y])
            {
                tmp = arr[index];
                printf()
                arr[index] = arr[y];
                arr[y] = arr[index];
            }
            y--;
        }
        index--;
    }
    return (arr);
}