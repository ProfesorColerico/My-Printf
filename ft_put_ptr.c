/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <wiljimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:23:07 by wiljimen          #+#    #+#             */
/*   Updated: 2023/12/05 18:24:34 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_aux(unsigned long nptr)
{
	int	i;

	i = 0;
	if (nptr >= 16)
	{
		i += ft_ptr_aux(nptr / 16);
		i += ft_ptr_aux(nptr % 16);
	}
	else
	{
		if (nptr < 10)
			i += ft_putchar(nptr + 48);
		else
			i += ft_putchar(nptr - 10 + 'a');
	}
	return (i);
}

int	ft_put_ptr(int *ptr)
{
	int i;

	i = 2;
	ft_putchar('0');
	ft_putchar('x');
	i += ft_ptr_aux((unsigned long)ptr);
	return (i);
}

#include <stdio.h>

int	main(void)
{
	int	n;
	int	*ptr;

	n = 123456;
	ptr = &n;
	ft_put_ptr(ptr);
	printf("\n");
	printf("%p", ptr);
}