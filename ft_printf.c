/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:12:12 by slord             #+#    #+#             */
/*   Updated: 2022/05/05 18:05:08 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{	
	int		i;
	int		j;
	va_list	ptr;

	va_start(ptr, str);
	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			j++;
		}
		if (str[i] == '%')
		{
			j = j + ft_classe(str[i + 1], ptr);
			i++;
		}
		i++;
	}
	va_end(ptr);
	return (j);
}
