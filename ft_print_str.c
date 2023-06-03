/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:11:09 by shisaeki          #+#    #+#             */
/*   Updated: 2023/06/03 22:34:27 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int		count;
	char	*str_null;

	count = 0;
	str_null = "(null)";
	if (!str)
	{
		while (*str_null)
		{
			count += ft_print_char(*str_null);
			str_null++;
		}
	}
	else
	{
		while (*str)
		{
			count += ft_print_char(*str);
			str++;
		}
	}
	return (count);
}
