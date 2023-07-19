/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:22:28 by alakin            #+#    #+#             */
/*   Updated: 2023/07/18 17:22:28 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac < 2)
		return (0);
	stack_a = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_a)
		return (0);
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_b)
		return (0);
	charge_stack(ac, av, stack_a, stack_b);
	sort_main(stack_a, stack_b);
	free_stacks(stack_a, stack_b);
}
