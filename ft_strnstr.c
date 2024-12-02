/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:36:22 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/14 11:54:44 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *ha, const char *ne, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ne[i] == '\0')
		return ((char *)ha);
	if (l == 0)
		return (0);
	while (ha[i] != '\0' && i < l)
	{
		j = 0;
		while (ha[i + j] == ne[j] && i + j < l)
		{
			if (ne[j + 1] == '\0')
				return ((char *)ha + i);
			else
			{
				j++;
			}
		}
		i++;
	}
	return (0);
}
