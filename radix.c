/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:24:04 by alakin            #+#    #+#             */
/*   Updated: 2023/07/18 19:40:07 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(int *array, int size)
{
	int		max_value;
	int		max_bit;
	int		i;

	i = 0;
	max_value = array[0];
	while (i < size)
	{
		if (array[i] > max_value)
			max_value = array[i];
		i++;
	}
	if (max_value < 0)
		max_value = -max_value;
	max_bit = 0;
	while (max_value > 0)
	{
		max_value >>= 1;
		max_bit++;
	}
	return (max_bit);
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	size;
	int	j;

	size = get_max_bits(stack_a->data, stack_a->size);
	i = 0;
	if (!isstacksorted(stack_a))
	{
		while (i < size)
		{
			j = 0;
			while (j < stack_a->size)
			{
				if ((stack_a->data[stack_a->top] >> i) & 1)
					ra(stack_a);
				else
					pb(stack_a, stack_b);
				j++;
			}
			i++;
			while (!isempty(stack_b))
				pa(stack_a, stack_b);
		}
	}
}

void	sort_main(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size < 6)
		stack_sort(stack_a, stack_b);
	else
	{
		get_index(stack_a);
		radix_sort(stack_a, stack_b);
	}
}
