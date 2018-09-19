/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukhoza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 11:39:15 by tukhoza           #+#    #+#             */
/*   Updated: 2018/08/27 11:39:25 by tukhoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	length;
	char	*str;

	if (!s1)
		return (NULL);
	length = ft_strlen(s1);
	if (n < length)
		length = n;
	if (!(str = (char*)malloc(length + 1)))
		return (NULL);
	ft_strncpy(str, s1, length);
	return (str);
}
