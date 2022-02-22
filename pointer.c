/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:56:13 by ayakdi            #+#    #+#             */
/*   Updated: 2021/12/30 16:35:37 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	pointer(va_list parameters)
{
	long unsigned int	a;

	a = va_arg(parameters, long unsigned int);
	putstr("0x");
	putnbr_pointer(a);
	return (nbrlen_long(a));
}
