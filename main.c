/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:04:02 by shisaeki          #+#    #+#             */
/*   Updated: 2023/06/03 13:39:49 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char ptr[10] = "ft_printf";

	int ex = printf("%x:%d:%u:%s:%p:%c:%%", 15, -12, 231,"Hello",ptr, 'c');
	printf("\n");
	int ac = ft_printf("%x:%d:%u:%s:%p:%c:%%", 15, -12, 231, "Hello",ptr, 'c');
	printf("\n");
	printf("ex: %d\nac: %d", ex, ac);
	return (0);
}
