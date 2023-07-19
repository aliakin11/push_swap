/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:33:14 by alakin            #+#    #+#             */
/*   Updated: 2023/07/18 17:33:14 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_argument_sort(t_stack *stack_a)
{
	if (stack_a->data[stack_a->top] > stack_a->data[stack_a->top - 1])
		sa(stack_a);
}

void	three_argument_sort(t_stack *stack_a)
{
	int	max_index;

	max_index = find_max_index(stack_a);
	if (max_index == 2)
	{
		ra(stack_a);
		two_argument_sort(stack_a);
	}
	else if (max_index == 1)
	{
		rra(stack_a);
		two_argument_sort(stack_a);
	}
	else if (max_index == 0)
		two_argument_sort(stack_a);
}

void	four_argument_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (!isstacksorted(stack_a))
	{
		push_min_index(stack_a, stack_b);
		three_argument_sort(stack_a);
		pa(stack_a, stack_b);
	}
}

void	five_argument_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (!isstacksorted(stack_a))
	{
		push_min_index(stack_a, stack_b);
		four_argument_sort(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}

void	stack_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 2)
		two_argument_sort(stack_a);
	else if (stack_a->size == 3)
		three_argument_sort(stack_a);
	else if (stack_a->size == 4)
		four_argument_sort(stack_a, stack_b);
	else if (stack_a->size == 5)
		five_argument_sort(stack_a, stack_b);
}
