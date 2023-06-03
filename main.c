/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <shisaeki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:40:55 by shisaeki          #+#    #+#             */
/*   Updated: 2023/06/03 22:40:57 by shisaeki         ###   ########.fr       */
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
