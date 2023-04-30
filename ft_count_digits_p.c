/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_p.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:59:14 by slord             #+#    #+#             */
/*   Updated: 2022/05/09 14:00:07 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_count_digits_p(unsigned long c, int base)
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
