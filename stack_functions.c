#include "push_swap.h"

void swap(Stack *stack)
{
    int temp;

    if (!isEmpty(stack))
    {   
        temp = stack->data[stack->top];
        stack->data[stack->top] = stack->data[stack->top - 1];
        stack->data[stack->top - 1] = temp;
    }    
}

void sa(Stack *stack_a)
{
    swap(stack_a);
    write(1,"sa\n",3);
    
}

void sb(Stack *stack_b)
{
    swap(stack_b);
    write(1,"sb\n",3);
    
}

void ss(Stack *stack_a,Stack *stack_b)
{
    swap(stack_a);
    swap(stack_b);
}

void pa(Stack *stack_a, Stack *stack_b)
{

    if (!isEmpty(stack_b))
    {
        push(stack_a, pop(stack_b));
        write(1,"pa\n",3);
        return ;
    }
    write(1,"pa\n",3);
    
}

void pb(Stack *stack_a, Stack *stack_b)
{

    if (!isEmpty(stack_a))
    {
        push(stack_b, pop(stack_a));
        write(1,"pb\n",3);
        return ;
    }
    write(1,"pb\n",3);
    
}

void ra(Stack *stack_a)
{
    int temp;
    int i;

    i = stack_a->top;
    temp = stack_a->data[stack_a->top];
    while (i > 0)
    {
        stack_a->data[i] = stack_a->data[i - 1];
        i--;
    }
    stack_a->data[0] = temp;
    write(1,"ra\n",3);
    
}

 void rb(Stack *stack_b)
{
   int temp;
    int i;

    i = stack_b->top;
    temp = stack_b->data[stack_b->top];

    while (i > 0)
    {
        stack_b->data[i] = stack_b->data[i - 1];
        i--;
    }
    stack_b->data[0] = temp;
    write(1,"rb\n",3);
    
}

void rr(Stack *stack_a, Stack *stack_b)
{
    ra(stack_a);
    rb(stack_b);
}

void rra(Stack *stack_a)
{
    int temp;
    int i;

    i = 0;
    
    temp = stack_a->data[0];
    while (i < stack_a->top)
    {
        stack_a->data[i] = stack_a->data[i+1];
        i++;
    }
    stack_a->data[stack_a->top] = temp;
    write(1,"rra\n",4);
}

void rrb(Stack *stack_b)
{
    int temp;
    int i;

    i = 0;
    temp = stack_b->data[0];
    while (i < stack_b->top)
    {
        stack_b->data[i] = stack_b->data[i+1];
        i++;
    }
    stack_b->data[stack_b->top] = temp;
    write(1,"rrb\n",4);    
}

void rrr(Stack *stack_a, Stack *stack_b)
{
    rra(stack_a);
    rrb(stack_b);
}
