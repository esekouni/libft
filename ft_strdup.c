/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:27:13 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/14 11:46:49 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		i;
	size_t		l;
	char		*ch;
	char		*co;

	i = 0;
	l = ft_strlen((char *)s);
	ch = (char *)s;
	co = malloc (sizeof(char) * ft_strlen(ch) + 1);
	if (co == NULL)
		return (0);
	while (i < l)
	{
		co[i] = ch[i];
		i++;
	}
	co[i] = '\0';
	return (co);
}
