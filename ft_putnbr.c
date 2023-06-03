/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:29:07 by shisaeki          #+#    #+#             */
/*   Updated: 2023/05/30 14:40:10 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_digits(int n)
{
	int count;

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
		ft_putchar(n + '0');
	else if (10 <= n)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
	{
		if (n == INT_MIN)
			ft_putstr("-2147483648");
		else
		{
			ft_putchar('-');
			ft_putnbr(-1 * n);
		}
	}
}
