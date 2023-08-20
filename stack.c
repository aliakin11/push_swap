#include "push_swap.h"

void push(Stack *stack, int value) 
{
    if (stack->top > stack->size - 1)
    {
        int *newData;
        int newSize;

        newSize = stack->size * 2;
        newData = (int *)malloc(sizeof(int) * newSize);
        if (newData != NULL)
        {
            memcpy(newData,stack->data,stack->size * sizeof(int));
            free(stack->data);
            stack->data = newData;
            stack->size = newSize;
            stack->data[++stack->top] = value;
        }
    } 
    stack->data[++stack->top] = value;
}

int pop(Stack *stack)
{
    if (stack->top >= 0) 
        return (stack->data[stack->top--]);
    return (-1);
}

int isEmpty(Stack *stack) 
{
    return (stack->top == -1);
}

int isStackSorted(Stack *stack) 
{
    int i;
    
    i = 0;
    if (stack->top <= 0) 
        return (1); 
    while (i <= stack->top - 1) 
    {
        if (stack->data[i] < stack->data[i+1]) 
            return (0); 
        i++;
    }
    return (1); 
}

void    init_stack(Stack *stack, int size)
{
	stack->size = size;
    stack->data = (int *)malloc(sizeof(int) * stack->size);
    stack->top = -1;
}

void charge_stack(int ac,char **argv,Stack *stack_a,Stack *stack_b)
{
    init_stack(stack_a,ac - 1);
    init_stack(stack_b,ac - 1);
    ac--;
    while (ac > 0)
    {
        push(stack_a,atoi(argv[ac]));
        ac--;
    }  
}

void free_stacks(Stack *stack_a,Stack *stack_b)
{
    free(stack_a->data);
    free(stack_b->data);
    free(stack_a);
    free(stack_b);
}

