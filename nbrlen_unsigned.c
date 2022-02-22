/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrlen_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 12:03:53 by ayakdi            #+#    #+#             */
/*   Updated: 2021/12/30 16:35:37 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nbrlen_unsigned(unsigned int nb)
{
	if (nb > 9)
		return (1 + nbrlen_unsigned(nb / 10));
	return (1);
}
