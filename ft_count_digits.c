/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:29:08 by slord             #+#    #+#             */
/*   Updated: 2022/05/09 13:56:30 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_count_digits(long c, int base)
{
	int	ndigit;

	if (c == 0)
		return (1);
	ndigit = 0;
	if (c < 0)
	{
		ndigit++;
		c = c * -1;
	}
	while (c > 0)
	{
		c = c / base;
		ndigit++;
	}
	return (ndigit);
}
