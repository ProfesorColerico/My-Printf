/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <wiljimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:08:06 by wiljimen          #+#    #+#             */
/*   Updated: 2023/12/05 11:08:06 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(unsigned int nx)
{
	if (nx >= 16)
	{
		ft_hexa(nx / 16);
		ft_hexa(nx % 16);
	}
	else
	{
		if (nx < 10)
			ft_putchar(nx + 48);
		else
			ft_putchar(nx - 10 + 'a');
	}
}

void	ft_heXa(unsigned int nX)
{
	if (nX >= 16)
	{
		ft_heXa(nX / 16);
		ft_heXa(nX % 16);
	}
	else
	{
		if (nX < 10)
			ft_putchar(nX + 48);
		else
			ft_putchar(nX - 10 + 'A');
	}
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned int n = 123456;;

	ft_hexa(n);
	ft_putchar('\n');
	printf("%x\n\n", n);
	ft_heXa(n);
	ft_putchar('\n');
	printf("%X\n", n);

	return (0);
}*/