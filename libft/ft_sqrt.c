/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukhoza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 18:29:17 by tukhoza           #+#    #+#             */
/*   Updated: 2018/08/26 18:29:27 by tukhoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int		x;
	int		i;

	i = 0;
	x = 1;
	while (i <= (nb / 2))
	{
		if (x * x == nb)
			return (x);
		x = (x + nb / x) / 2;
		i++;
	}
	return (0);
}
