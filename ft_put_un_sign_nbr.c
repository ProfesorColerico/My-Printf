/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <wiljimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:57:26 by wiljimen          #+#    #+#             */
/*   Updated: 2023/12/05 10:57:26 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_put_unsign_nbr(unsigned int nb)
{
	if (nb > 9)
	{
		ft_put_unsign_nbr(nb / 10);
		ft_put_unsign_nbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
/*
#include <stdio.h>

int	main(void)
{
	int n;
	unsigned int num;

	n = -7;
	num = 7;
	ft_putnbr(n);
	printf("\n");
	printf("%d\n", n);
	ft_put_unsign_nbr(num);
	printf("\n%u\n", num);

	return (0);
}*/