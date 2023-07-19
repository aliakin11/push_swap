/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:36:17 by alakin            #+#    #+#             */
/*   Updated: 2023/07/18 17:36:17 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calculate_rotate_count(t_stack *stack_a, t_stack *stack_b,
			int min_index, int rotate_count)
{
	int	i;

	i = 0;
	if (rotate_count <= min_index)
	{
		while (i < rotate_count)
		{
			ra(stack_a);
			i++;
		}
	}
	else
	{
		while (i <= min_index)
		{
			rra(stack_a);
			i++;
		}
	}
	pb(stack_a, stack_b);
}

int	find_min_index(t_stack *stack)
{
	int	min_index;
	int	i;

	min_index = 0;
	i = 1;
	while (i <= stack->top) 
	{
		if (stack->data[i] < stack->data[min_index]) 
			min_index = i; 
		i++;
	}
	return (min_index); 
}

int	find_max_index(t_stack *stack)
{
	int	max_index;
	int	i;

	max_index = 0;
	i = 1;
	while (i <= stack->top) 
	{
		if (stack->data[i] > stack->data[max_index]) 
			max_index = i; 
		i++;
	}
	return (max_index); 
}

void	push_min_index(t_stack *stack_a, t_stack *stack_b)
{
	int	min_index;
	int	rotate_count;

	min_index = find_min_index(stack_a);
	rotate_count = stack_a->top - min_index;
	if (min_index == stack_a->top)
		pb(stack_a, stack_b);
	else
	{
		if (min_index == 0) 
		{
			rra(stack_a);
			pb(stack_a, stack_b);
		}
		else 
			calculate_rotate_count(stack_a, stack_b, min_index, rotate_count);
	}
}

void	push_max_index(t_stack *stack_a, t_stack *stack_b)
{
	int	max_index;
	int	rotate_count;

	max_index = find_max_index(stack_a);
	rotate_count = stack_a->top - max_index;
	if (max_index == stack_a->top)
		pb(stack_a, stack_b);
	else
		calculate_rotate_count(stack_a, stack_b, max_index, rotate_count);
}
