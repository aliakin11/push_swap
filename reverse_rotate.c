/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:50:46 by alakin            #+#    #+#             */
/*   Updated: 2023/07/18 19:11:06 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack_a)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack_a->data[0];
	while (i < stack_a->top)
	{
		stack_a->data[i] = stack_a->data[i + 1];
		i++;
	}
	stack_a->data[stack_a->top] = temp;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack_b)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack_b->data[0];
	while (i < stack_b->top)
	{
		stack_b->data[i] = stack_b->data[i + 1];
		i++;
	}
	stack_b->data[stack_b->top] = temp;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
