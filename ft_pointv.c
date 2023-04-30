/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:26:22 by slord             #+#    #+#             */
/*   Updated: 2022/05/16 11:39:21 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_pointv(unsigned long nb)
{
	int	i;

	ft_putstr("0x");
	ft_puthexa(nb, 0);
	i = ft_count_digits_p((unsigned long)nb, 16) + 2;
	return (i);
}
