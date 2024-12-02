/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:20:46 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/18 22:10:33 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int	nombremot(char *ch, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (ch[i])
	{
		while (ch[i] && ch[i] == c)
			i++;
		if (ch[i] && ch[i] != c)
			count++;
		while (ch[i] && ch[i] != c)
			i++;
	}
	return (count);
}

static	char	*allocationmot(char *ch, char c)
{
	char		*p;
	int			i;
	int			count;
	int			x;

	i = 0;
	x = 0;
	count = 0;
	while (ch[i] && ch[i] == c)
		i++;
	while (ch[i] && ch[i] != c)
	{
		count++;
		i++;
	}
	p = malloc(sizeof(char) * (count + 1));
	if (!p)
		return (NULL);
	i = i - count;
	while (ch[i] && ch[i] != c)
		p[x++] = ch[i++];
	p[x] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	char		**p;

	i = 0;
	j = 0;
	p = malloc(sizeof(char *) * (nombremot((char *)s, c) + 1));
	if (!p)
		return (NULL);
	while (((char *)s)[i] && j < nombremot((char *)s, c))
	{
		while (((char *)s)[i] && ((char *)s)[i] == c)
			i++;
		p[j] = allocationmot((char *)&s[i], c);
		while (((char *)s)[i] && ((char *)s)[i] != c)
			i++;
		j++;
	}
	p[j] = NULL;
	return (p);
}
