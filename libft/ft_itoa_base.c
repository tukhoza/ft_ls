/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukhoza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:09:59 by tukhoza           #+#    #+#             */
/*   Updated: 2018/08/26 18:10:18 by tukhoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long		ft_power_for_itoa(long nb, long power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_power(nb, power - 1));
}

char			*ft_itoa_base(int n, int base)
{
	char	*str;
	int		i;
	int		length;

	if (base < 2 || base > 16 || (base != 10 && n < 0))
		return (NULL);
	if (base == 10)
		return (ft_itoa(n));
	length = 1;
	while (ft_power_for_itoa(base, length) <= n)
		length++;
	str = (char*)malloc(sizeof(*str) * (length + 1));
	i = 0;
	while (i < length)
	{
		if (base > 10 && (n % base >= 10))
			str[i++] = (n % base) - 10 + 'A';
		else
			str[i++] = (n % base) + '0';
		n /= base;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}
