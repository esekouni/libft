/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:14:12 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/14 11:53:23 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *ch1, const char *ch2, size_t l)
{
	size_t				i;
	unsigned char		*s1;
	unsigned char		*s2;

	i = 0;
	s1 = (unsigned char *)ch1;
	s2 = (unsigned char *)ch2;
	while (i < l && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
