/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:33:07 by ayakdi            #+#    #+#             */
/*   Updated: 2022/02/22 13:36:59 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nbrlen(int nb, int taille)
{
	if (nb == -2147483648)
		return (11);
	if (nb < 0)
		return (1 + nbrlen(-nb, taille));
	if (nb >= taille)
		return (1 + nbrlen(nb / taille, taille));
	return (1);
}
