/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <wiljimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:50:38 by wiljimen          #+#    #+#             */
/*   Updated: 2023/12/05 10:50:38 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char s;
	char *str;

	s = 's';
	str = "Hola";
	ft_putchar(s);
	printf("\n%c\n", s);
	ft_putstr(str);
	printf("\n%s\n", str);

	return (0);
}*/