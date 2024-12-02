/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:18:37 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/14 11:52:25 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		l;
	char		*ch;

	i = 0;
	l = ft_strlen((char *)s);
	ch = malloc(sizeof(char) * l + 1);
	if (!ch)
		return (0);
	while (i < l)
	{
		ch[i] = f(i, ((char *)s)[i]);
		i++;
	}
	ch[i] = '\0';
	return (ch);
}
