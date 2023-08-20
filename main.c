#include "push_swap.h"
int	main(int ac, char **av)
{
	Stack	*stack_a;
	Stack	*stack_b;

	if (ac < 2)
		return (0);
	stack_a = (Stack *)malloc(sizeof(Stack));
	stack_b = (Stack *)malloc(sizeof(Stack));
	charge_stack(ac, av, stack_a, stack_b);
	getIndex(stack_a);
	radix_sort(stack_a,stack_b);
	free_stacks(stack_a,stack_b);
}

 