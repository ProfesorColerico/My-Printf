/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <wiljimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:23:07 by wiljimen          #+#    #+#             */
/*   Updated: 2023/12/05 12:23:07 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_ptr_aux(unsigned long nptr)
{
	if (nptr >= 16)
	{
		ft_ptr_aux(nptr / 16);
		ft_ptr_aux(nptr % 16);
	}
	else
	{
		if (nptr < 10)
			ft_putchar(nptr + 48);
		else
			ft_putchar(nptr - 10 + 'a');
	}
}

void	ft_put_ptr(int *ptr)
{
	ft_putchar('0');
	ft_putchar('x');
	ft_ptr_aux((unsigned long)ptr);
}
/*
int	main(void)
{
	int n;
	int *ptr;

	n = 123456;
	ptr = &n;
	ft_put_ptr(ptr);
	printf("\n");
	printf("%p", ptr);
}*/