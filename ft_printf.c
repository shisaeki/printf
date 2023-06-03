/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <shisaeki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:06:37 by shisaeki          #+#    #+#             */
/*   Updated: 2023/05/31 17:07:05 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *format, ...)
{
	int		count;
	char	*itr;
	int		nbr;
	va_list	ap;

	va_start(ap, format);
	itr = format;
	count = 0;
	while (*itr)
	{
		if (*itr == '%')
		{
			itr++;
			if (*itr == 'c')
			{
				count += ft_putchar(va_arg(ap, int));
				itr++;
			}
			else if (*itr == 's')
			{
				count += ft_putstr(va_arg(ap, char *));
				itr++;
			}
			else if (*itr == 'd')
			{
				nbr = va_arg(ap, int);
				ft_putnbr(nbr);
				count += count_digits(nbr);
				itr++;
			}
			else if (*itr == '%')
			{
				ft_putchar('%');
				count++;
				itr++;
			}
		}
		if (*itr != '\0')
		{
			ft_putchar(*itr);
			itr++;
			count++;
		}
	}
	va_close(ap);
	return (count);
}
