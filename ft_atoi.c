/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:09:46 by alakin            #+#    #+#             */
/*   Updated: 2023/07/18 17:09:46 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static void	checker(long result)
{
	if (result > 2147483647 || (result * -1) < -2147483648)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
}

static int	ft_isdigit(int c)
{
	if (c == 0 || c == 46)
		return (0);
	if (c >= '0' && c <= '9')
		return (1);
	else
	{
		write(1, "Error\n", 6);
		exit(1);
	}
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (ft_isspace(*str))
		++str;
	if (*str == '-' || *str == '+') 
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while (ft_isdigit(*str)) 
	{
		result = result * 10 + (*str - '0');
		checker(result);
		++str;
	}
	return ((int)(result * sign));
}
