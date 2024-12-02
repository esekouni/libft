/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:20:18 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/18 22:11:48 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ch;
	unsigned int	i;

	i = 0;
	if (ft_strlen((char *)s) < len)
		ch = (char *)malloc (sizeof(char) * ft_strlen((char *)s) + 1);
	else
		ch = (char *)malloc(sizeof(char) * len + 1);
	if (ch == NULL)
		return (ch);
	while (i < len && start <= (unsigned int)ft_strlen((char *)s))
			ch[i++] = ((char *)s)[start++];
	ch[i] = '\0';
	return (ch);
}
