/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 16:36:16 by ayakdi            #+#    #+#             */
/*   Updated: 2022/01/04 15:37:51 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_base(unsigned int nb, char *base)
{
	if (nb >= 16)
	{
		putnbr_base(nb / 16, base);
	}
	ft_putchar(base[nb % 16]);
	return (nb);
}
