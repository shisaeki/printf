/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:11:09 by shisaeki          #+#    #+#             */
/*   Updated: 2023/05/30 14:39:41 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int count;

	count = 0;
	if(!str)
		return (count);
	while(*str)
	{
	count += ft_putchar(*str);
	str++;
	}
	return (count);
}
