/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:31:11 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/18 17:19:19 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		j;
	size_t		len;
	size_t		g;
	size_t		lensrc;

	lensrc = ft_strlen((char *)src);
	g = ft_strlen(dest);
	j = 0;
	if (g >= size)
		return (lensrc + size);
	len = g + lensrc;
	while (src [j] && g < size - 1)
		dest[g++] = src[j++];
	dest[g] = '\0';
	return (len);
}
