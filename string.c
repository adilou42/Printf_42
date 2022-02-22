/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:19:45 by ayakdi            #+#    #+#             */
/*   Updated: 2022/01/05 16:38:11 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	string(va_list parameters)
{
	char	*a;

	a = va_arg(parameters, char *);
	return (putstr(a));
}
