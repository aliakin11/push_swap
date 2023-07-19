/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:39:57 by alakin            #+#    #+#             */
/*   Updated: 2023/07/18 18:52:55 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	if (!isempty(stack_b))
	{
		push(stack_a, pop(stack_b));
		write(1, "pa\n", 3);
		return ;
	}
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	if (!isempty(stack_a))
	{
		push(stack_b, pop(stack_a));
		write(1, "pb\n", 3);
		return ;
	}
	write(1, "pb\n", 3);
}

void	ra(t_stack *stack_a)
{
	int	temp;
	int	i;

	i = stack_a->top;
	temp = stack_a->data[stack_a->top];
	while (i > 0)
	{
		stack_a->data[i] = stack_a->data[i - 1];
		i--;
	}
	stack_a->data[0] = temp;
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack_b)
{
	int	temp;
	int	i;

	i = stack_b->top;
	temp = stack_b->data[stack_b->top];
	while (i > 0)
	{
		stack_b->data[i] = stack_b->data[i - 1];
		i--;
	}
	stack_b->data[0] = temp;
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
