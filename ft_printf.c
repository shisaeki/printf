/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <shisaeki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:06:37 by shisaeki          #+#    #+#             */
/*   Updated: 2023/06/03 22:26:55 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse_format(va_list *ap, const char *itr)
{
	int	count;

	count = 0;
	if (*itr == 'c')
		count += ft_print_char(va_arg(*ap, int));
	else if (*itr == 's')
		count += ft_print_str(va_arg(*ap, char *));
	else if (*itr == 'd' || *itr == 'i')
		count += ft_print_nbr(va_arg(*ap, int));
	else if (*itr == 'u')
		count += ft_print_unbr(va_arg(*ap, unsigned int));
	else if (*itr == 'p')
		count += ft_print_ptr(va_arg(*ap, unsigned long long));
	else if (*itr == 'x' || *itr == 'X')
		count += ft_print_hex(va_arg(*ap, int), *itr);
	else if (*itr == '%')
		count += ft_print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int			count;
	const char	*itr;
	va_list		ap;

	va_start(ap, format);
	itr = format;
	count = 0;
	while (*itr)
	{
		if (*itr == '%')
		{
			itr++;
			count += parse_format(&ap, itr);
		}
		else if (*itr != '\0')
			count += ft_print_char(*itr);
		itr++;
	}
	va_end(ap);
	return (count);
}
