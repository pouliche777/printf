/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:49:58 by slord             #+#    #+#             */
/*   Updated: 2022/05/16 11:43:07 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_classe(char c, va_list ptr);
int		ft_char(char c);
void	ft_putchar(char c);
size_t	ft_strlen(const char *str);
void	ft_putstr(char *str);
int		ft_string(char *str);
void	ft_putnb(int n);
int		ft_int(int c);
int		ft_unsigned(unsigned int c);
void	ft_putunsigned(unsigned int n);
int		ft_hexamin(unsigned int c);
void	ft_puthexa(unsigned long c, int i);
int		ft_hexamaj(unsigned int c);
int		ft_count_digits(long c, int base);
int		ft_pointv(unsigned long nb);
int		ft_count_digits_p(unsigned long c, int base);

#endif
