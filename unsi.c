/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:43:43 by ayakdi            #+#    #+#             */
/*   Updated: 2021/12/30 16:35:37 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	unsi(va_list parameters)
{
	unsigned int	a;

	a = va_arg(parameters, unsigned int);
	putnbr_unsigned(a);
	return (nbrlen_unsigned(a));
}
