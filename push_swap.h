
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct
{
    int *data;
    int size;
    int top;
} Stack;

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>


int pop(Stack *stack);
void push(Stack *stack, int value);
int peep(Stack *stack);
int isEmpty(Stack *stack);
int isStackSorted(Stack *stack);
void	init_stack(Stack *stack, int size);
void charge_stack(int ac,char **argv,Stack *stack_a,Stack *stack_b);
void swap(Stack *stack);
void sa(Stack *stack_a);
void sb(Stack *stack_b);
void ss(Stack *stack_a,Stack *stack_b);
void pa(Stack *stack_a, Stack *stack_b);
void pb(Stack *stack_a, Stack *stack_b);
void ra(Stack *stack_a);
void rb(Stack *stack_b);
void rr(Stack *stack_a, Stack *stack_b);
void rra(Stack *stack_a);
void rrb(Stack *stack_b);
void rrr(Stack *stack_a, Stack *stack_b);
void calculate_rotate_count(Stack *stack_a, Stack *stack_b, int min_index, int rotate_count);
int find_min_index(Stack *stack);
int find_max_index(Stack *stack);
void push_min_index(Stack *stack_a, Stack *stack_b);
void push_max_index(Stack *stack_a, Stack *stack_b);
void two_argument_sort(Stack *stack_a);
void three_argument_sort(Stack *stack_a);
void four_argument_sort(Stack *stack_a,Stack *stack_b);
void five_argument_sort(Stack *stack_a, Stack *stack_b);
void twenty_argument_sort(Stack *stack_a, Stack *stack_b);
void small_argument_sort(Stack *stack_a, Stack *stack_b);
void free_stacks(Stack *stack_a,Stack *stack_b);
int get_max_bits(int *array, int size);
void insertion_sort(int *array,int size);
int *sorted_array(int *src, int size);
void getIndex(Stack *stack);
void radix_sort(Stack *stack_a,Stack *stack_b);
void stack_sort(Stack *stack_a, Stack *stack_b);


#endif
