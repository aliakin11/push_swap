/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_and_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:47:04 by alakin            #+#    #+#             */
/*   Updated: 2023/07/18 18:51:52 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_stack *stack, int size)
{
	stack->size = size;
	stack->data = (int *)malloc(sizeof(int) * stack->size);
	stack->top = -1;
}

void	charge_stack(int ac, char **argv, t_stack *stack_a, t_stack *stack_b)
{
	init_stack(stack_a, ac - 1);
	init_stack(stack_b, ac - 1);
	ac--;
	while (ac > 0)
	{
		push(stack_a, ft_atoi(argv[ac]));
		ac--;
	}
	if (isduplicate(stack_a))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
}

void	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a->data);
	free(stack_b->data);
	free(stack_a);
	free(stack_b);
}
