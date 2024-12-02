/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:51:23 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/17 18:45:09 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *ch, int x)
{
	size_t	l;

	l = ft_strlen((char *)ch);
	while (ch[l] != (char)x)
	{
		if (l == 0)
			return (0);
		l--;
	}
	return ((char *)&ch[l]);
}
