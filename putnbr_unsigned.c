/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 12:13:09 by ayakdi            #+#    #+#             */
/*   Updated: 2021/12/30 16:35:37 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	putnbr_unsigned(unsigned int nb)
{
	if (nb > 9)
		putnbr_unsigned(nb / 10);
	ft_putchar(nb % 10 + '0');
}
