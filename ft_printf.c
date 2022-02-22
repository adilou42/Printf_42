/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:08:43 by ayakdi            #+#    #+#             */
/*   Updated: 2022/02/22 13:36:42 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	parameters;

	i = 0;
	count = 0;
	va_start(parameters, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += pourcentage(format[i], parameters, count);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
			count++;
		}
	}
	va_end(parameters);
	return (count);
}
