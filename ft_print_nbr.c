/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <shisaeki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:41:25 by shisaeki          #+#    #+#             */
/*   Updated: 2023/06/03 22:41:27 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

void	ft_putnbr(int n)
{
	if (0 <= n && n < 10)
		ft_print_char(n + '0');
	else if (10 <= n)
	{
		ft_putnbr(n / 10);
		ft_print_char(n % 10 + '0');
	}
	else
	{
		if (n == INT_MIN)
			ft_print_str("-2147483648");
		else
		{
			ft_print_char('-');
			ft_putnbr(-1 * n);
		}
	}
}

int	ft_print_nbr(int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		ft_putnbr(0);
		count++;
	}
	else
	{
		ft_putnbr(n);
		count += count_digits(n);
	}
	return (count);
}
