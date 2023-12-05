/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <wiljimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:04:26 by wiljimen          #+#    #+#             */
/*   Updated: 2023/12/05 11:04:26 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <unistd.h>
# include <stdarg.h>

void	ft_putnbr(int nb);
void	ft_put_unsign_nbr(unsigned int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_hexa(unsigned int nx);
void	ft_heXa(unsigned int nX);

#endif