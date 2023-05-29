/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <shisaeki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:06:37 by shisaeki          #+#    #+#             */
/*   Updated: 2023/05/28 11:35:44 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

int	ft_putstr(char *str)
{
	size_t res;

	res = 0;
	if(!str)
		return (res);
	while(*str)
	{
		res += ft_putchar(*str);
		str++;
	}
	return (res);
}

int	ft_printf(char *format, ...)
{
	int res;
	char *itr;

	itr = format;
	res = 0;
	while (*itr)
	{
		if (*itr == '%')
		{
			continue;
		}
		ft_putchar(*itr);
		itr++;
	}
	return (res);
}

#include <stdio.h>

int main()
{
	printf("Hello");
	printf("\n");
	ft_printf("Hello");
	return (0);
}
