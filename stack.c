/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:49:07 by alakin            #+#    #+#             */
/*   Updated: 2023/07/18 18:50:59 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack, int value)
{
	int	*newdata;
	int	newsize;

	if (stack->top > stack->size - 1)
	{
		newsize = stack->size * 2;
		newdata = (int *)malloc(sizeof(int) * newsize);
		if (newdata != NULL)
		{
			ft_memcpy(newdata, stack->data, stack->size * sizeof(int));
			free(stack->data);
			stack->data = newdata;
			stack->size = newsize;
			stack->data[++stack->top] = value;
		}
	}
	stack->data[++stack->top] = value;
}

int	pop(t_stack *stack)
{
	if (stack->top >= 0) 
		return (stack->data[stack->top--]);
	return (-1);
}

int	isempty(t_stack *stack)
{
	return (stack->top == -1);
}

int	isstacksorted(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->top <= 0) 
		return (1); 
	while (i <= stack->top - 1) 
	{
		if (stack->data[i] < stack->data[i + 1]) 
			return (0); 
		i++;
	}
	return (1); 
}
