/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <wiljimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:04:26 by wiljimen          #+#    #+#             */
/*   Updated: 2023/12/18 13:59:55 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	ft_putnbr(int nb);
int	ft_putunbr(unsigned int nb);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_hexa_lower(unsigned int numx);
int	ft_hexa_upper(unsigned int numbX);
int	ft_ptr_aux(unsigned long nptr);
int	ft_put_ptr(int *ptr);
int	ft_printf_counter(va_list args, const char type);
int	ft_printf(const char *str, ...);

#endif
