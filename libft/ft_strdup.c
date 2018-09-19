/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukhoza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:33:16 by tukhoza           #+#    #+#             */
/*   Updated: 2018/08/26 18:33:33 by tukhoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		length;
	char	*str;

	length = ft_strlen(s1);
	if (!(str = (char*)malloc(sizeof(*s1) * (length + 1))))
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
