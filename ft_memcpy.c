/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 22:08:12 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/18 18:24:01 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == NULL && d == NULL)
		return (0);
	while (i < n)
	{
		((char *)d)[i] = ((char *)src)[i];
		i++;
	}
	return (d);
}
