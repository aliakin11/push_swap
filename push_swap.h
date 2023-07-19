/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:23:11 by alakin            #+#    #+#             */
/*   Updated: 2023/07/18 18:54:33 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int	*data;
	int	size;
	int	top;
}t_stack;

int		pop(t_stack *stack);
void	push(t_stack *stack, int value);
int		peep(t_stack *stack);
int		isempty(t_stack *stack);
int		isstacksorted(t_stack *stack);
void	init_stack(t_stack *stack, int size);
void	charge_stack(int ac, char **argv, t_stack *stack_a, t_stack *stack_b);
void	swap(t_stack *stack);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	calculate_rotate_count(t_stack *stack_a, t_stack *stack_b, 
			int min_index, int rotate_count);
int		find_min_index(t_stack *stack);
int		find_max_index(t_stack *stack);
void	push_min_index(t_stack *stack_a, t_stack *stack_b);
void	push_max_index(t_stack *stack_a, t_stack *stack_b);
void	two_argument_sort(t_stack *stack_a);
void	three_argument_sort(t_stack *stack_a);
void	four_argument_sort(t_stack *stack_a, t_stack *stack_b);
void	five_argument_sort(t_stack *stack_a, t_stack *stack_b);
void	free_stacks(t_stack *stack_a, t_stack *stack_b);
int		get_max_bits(int *array, int size);
void	insertion_sort(int *array, int size);
int		*sorted_array(int *src, int size);
void	get_index(t_stack *stack);
void	radix_sort(t_stack *stack_a, t_stack *stack_b);
void	stack_sort(t_stack *stack_a, t_stack *stack_b);
void	sort_main(t_stack *stack_a, t_stack *stack_b);
int		ft_atoi(const char *str);
int		isduplicate(t_stack *stack);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif