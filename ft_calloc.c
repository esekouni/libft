/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:11:53 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/18 16:19:26 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t s)
{
	void		*ch;
	size_t		i;

	i = 0;
	if (c == SIZE_MAX || s == SIZE_MAX)
		return (NULL);
	ch = malloc (c * s);
	if (ch == NULL)
		return (0);
	else
	{
		while (i < c * s)
		{
			((char *)ch)[i] = 0;
			i++;
		}
	}
	return (ch);
}
