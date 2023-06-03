/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:47:34 by shisaeki          #+#    #+#             */
/*   Updated: 2023/05/30 14:42:01 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		count_digits(int n);
void	ft_putnbr(int n);

int		ft_printf(char *format, ...);

#endif
