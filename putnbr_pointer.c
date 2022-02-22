/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:16:13 by ayakdi            #+#    #+#             */
/*   Updated: 2022/01/04 15:49:29 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putnbr_pointer(long unsigned int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
		putnbr_pointer(nb / 16);
	ft_putchar(base[nb % 16]);
}
