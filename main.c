/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:04:02 by shisaeki          #+#    #+#             */
/*   Updated: 2023/06/03 22:30:41 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	char *str = NULL;
	int		ex;
	int		ac;

	ex = printf("%s", str);
	printf("\n");
	ac = ft_printf("%s", str);
	printf("\n");
	printf("ex: %d\nac: %d", ex, ac);
	return (0);
}
