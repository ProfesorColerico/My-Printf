/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:02:38 by wiljimen          #+#    #+#             */
/*   Updated: 2023/12/05 16:02:53 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_lower(unsigned int numx)
{
	if (numx >= 16)
	{
		ft_hex(numx / 16);
		ft_hex(numx % 16);
	}
	else
	{
		if (numx < 10)
			ft_putchar(numx + 48);
		else
			ft_putchar(numx - 10 + 'a');
	}
}

void	ft_hexa_upper(unsigned int numbX)
{
	if (numbX >= 16)
	{
		ft_Hexa(numbX / 16);
		ft_Hexa(numbX % 16);
	}
	else
	{
		if (numbX < 10)
			ft_putchar(numbX + 48);
		else
			ft_putchar(numbX - 10 + 'A');
	}
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned int n = 123456;;

	ft_hex(n);
	ft_putchar('\n');
	printf("%x\n\n", n);
	ft_Hexa(n);
	ft_putchar('\n');
	printf("%X\n", n);

	return (0);
}*/
