/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:04:57 by wiljimen          #+#    #+#             */
/*   Updated: 2023/12/05 16:29:30 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_counter(va_list args, char *type)
{
	int		counter;

	counter = 0;
	if (type[counter] == '%')
	{
		if (type[counter++] == 'c')
			counter += ft_putchar(va_arg(args, char));
		else if (type[counter++] == 's')
			counter += ft_putstr(va_arg(args, char *));
		else if (type[counter++] == 'p')
			counter += ft_put_ptr(va_arg(args, int *));
		else if (type[counter++] == 'd' || type[counter++] == 'i')
			counter += ft_putnbr(va_arg(args, int));
		else if (type[counter++] == 'u')
			counter += ft_putunbr(va_arg(args, unsigned int));
		else if (type[counter++] == 'x')
			counter += ft_hexa_lower(va_arg(args, unsigned int));
		else if (type[counter++] == 'X')
			counter += ft_hexa_upper(va_arg(args, unsigned int));
	}
	return (counter);
}
int	ft_printf(const char *str, ...)
{
	va_list(args);
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	va_start(args, str);
	while (str[i])
	{
		if(str[i++] == '%')
			counter += write(1, "%%", 1);
		counter += ft_printf_counter(args, str);
		i++;
	}
	return (counter);
}

int	main(void)
{
	ft_printf("Hola");
	return(0);
}