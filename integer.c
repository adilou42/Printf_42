/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:51:23 by ayakdi            #+#    #+#             */
/*   Updated: 2021/12/30 18:14:29 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	integer(va_list parameters)
{
	int	a;

	a = va_arg(parameters, int);
	ft_putnbr(a);
	return (nbrlen(a, 10));
}
