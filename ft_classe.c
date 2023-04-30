/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_classe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:26:42 by slord             #+#    #+#             */
/*   Updated: 2022/05/16 11:42:00 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_classe(char c, va_list ptr)
{
	int	i;

	i = 0;
	if (c == '%')
	{
		ft_putchar('%');
		i = 1;
	}
	if (c == 'c')
		i = ft_char(va_arg(ptr, int));
	if (c == 's')
		i = ft_string(va_arg(ptr, char *));
	if (c == 'd' || c == 'i')
		i = ft_int(va_arg(ptr, int));
	if (c == 'p')
		i = ft_pointv(va_arg(ptr, unsigned long));
	if (c == 'u')
		i = ft_unsigned(va_arg(ptr, int));
	if (c == 'x')
		i = ft_hexamin(va_arg(ptr, unsigned int));
	if (c == 'X')
		i = ft_hexamaj(va_arg(ptr, unsigned int));
	return (i);
}
