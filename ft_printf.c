/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <shisaeki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:06:37 by shisaeki          #+#    #+#             */
/*   Updated: 2023/05/30 11:31:30 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int	ft_putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

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
		}
		if (*itr != '\0')
		{
			ft_putchar(*itr);
			itr++;
			count++;
		}
	}
	return (count);
}

#include <stdio.h>

int main()
{
	int ex = printf("%d:%s:%c", -12, "Hello", 'c');
	printf("\n");
	int ac = ft_printf("%d:%s:%c", -12, "Hello", 'c');
	printf("\n");
	printf("ex: %d\nac: %d", ex, ac);
	return (0);
}
