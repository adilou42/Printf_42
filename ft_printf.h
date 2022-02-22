/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:47:13 by ayakdi            #+#    #+#             */
/*   Updated: 2022/01/05 16:12:16 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		pourcentage(char c, va_list parameters, int count);
void	ft_putnbr(int nb);
int		integer(va_list parameters);
int		character(va_list parameters);
int		putstr(char *str);
int		string(va_list parameters);
void	pourcent(char c);
int		unsi(va_list parameters);
void	ft_putchar(char c);
int		putnbr_base(unsigned int nb, char *base);
int		hexadecimal(va_list parameters, char *base);
int		nbrlen(int nb, int taille);
void	putnbr_unsigned(unsigned int nb);
int		nbrlen_unsigned(unsigned int nb);
int		ft_strlen(char *str);
void	putnbr_pointer(long unsigned int nb);
int		pointer(va_list parameters);
int		nbrlen_long(long unsigned int nb);
int		hexalen(unsigned int nb);

#endif