/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <wiljimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:04:26 by wiljimen          #+#    #+#             */
/*   Updated: 2023/12/05 18:24:05 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putnbr(int nb);
int	ft_putunbr(unsigned int nb);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_hexa_lower(unsigned int numx);
int	ft_hexa_upper(unsigned int numbX);
int	ft_ptr_aux(unsigned long nptr);
int	ft_put_ptr(int *ptr);

#endif
