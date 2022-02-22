/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:58:31 by ayakdi            #+#    #+#             */
/*   Updated: 2022/01/04 15:51:44 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	hexadecimal(va_list parameters, char *base)
{
	int	a;

	a = va_arg(parameters, unsigned int);
	putnbr_base(a, base);
	return (hexalen(a));
}
