/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:11:23 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/18 17:18:47 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ch;
	size_t		l;
	int			i;
	int			j;

	i = 0;
	j = 0;
	l = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	ch = (char *)malloc (sizeof(char) * l + 1);
	if (ch == NULL)
		return (ch);
	while (s1[i] != '\0')
	{
		ch[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ch[i] = s2[j];
		i++;
		j++;
	}
	ch[i] = '\0';
	return (ch);
}
