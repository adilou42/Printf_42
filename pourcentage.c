/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pourcentage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:22:18 by ayakdi            #+#    #+#             */
/*   Updated: 2021/12/30 18:16:40 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	pourcentage(char c, va_list parameters, int count)
{
	if (c == 'd' || c == 'i')
		count = integer(parameters);
	else if (c == 'c')
	{
		character(parameters);
		return (1);
	}
	else if (c == 's')
		count = string(parameters);
	else if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	else if (c == 'u')
		count = unsi(parameters);
	else if (c == 'x')
		count = hexadecimal(parameters, "0123456789abcdef");
	else if (c == 'X')
		count = hexadecimal(parameters, "0123456789ABCDEF");
	else if (c == 'p')
		count = pointer(parameters) + 2;
	return (count);
}
