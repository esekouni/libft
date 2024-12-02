/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:22:20 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/18 22:11:39 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	chcractere(char *ch, char c)
{
	int	i;

	i = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	size_t	lastindex(char *ch, char *set)
{
	size_t	i;

	i = ft_strlen(ch) - 1;
	while (chcractere(set, ch[i]))
		i--;
	return (i);
}

static	size_t	firstindex(char *ch, char *set)
{
	size_t	i;

	i = 0;
	while (chcractere(set, ch[i]))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		is;
	size_t		lf;
	char		*ch;

	i = 0;
	is = firstindex((char *)s1, (char *)set);
	lf = lastindex((char *)s1, (char *)set);
	if (is == ft_strlen((char *)s1))
		return (ft_strdup(""));
	ch = malloc(sizeof(char) * (lf - is + 2));
	if (!ch)
		return (NULL);
	while (is <= lf)
	{
		ch[i++] = ((char *)s1)[is++];
	}
	ch[i] = '\0';
	return (ch);
}
