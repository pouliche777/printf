/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:09:18 by slord             #+#    #+#             */
/*   Updated: 2022/05/05 18:06:29 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_unsigned(unsigned int c)
{	
	int	i;

	ft_putunsigned(c);
	if (c < 0)
			i = ft_count_digits(c + 4294967295, 10);
	if (c >= 0)
		i = ft_count_digits(c, 10);
	return (i);
}
