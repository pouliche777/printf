/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:18:55 by slord             #+#    #+#             */
/*   Updated: 2022/05/05 18:05:25 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexa(unsigned long c, int i)
{
	char	*str;

	str = "0123456789abcdef";
	if (i == 1)
		str = "0123456789ABCDEF";
	while (c >= 16)
	{
		ft_puthexa(c / 16, i);
		c = c % 16;
	}
	if (c < 16)
		ft_putchar(str[c]);
}
