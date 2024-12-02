/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:31:23 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/14 11:11:46 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t l)
{
	size_t		i;
	char		*fu_dest;
	char		*fu_src;

	i = 0;
	fu_dest = (char *)dest;
	fu_src = (char *)src;
	if (src == NULL && dest == NULL)
		return (0);
	if (fu_dest >= fu_src)
		while (l-- > 0)
			fu_dest[l] = fu_src[l];
	else
	{
		while (i < l)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
