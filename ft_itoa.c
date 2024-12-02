/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:13:06 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/18 22:09:24 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	lent(int n)
{
	int		count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		l;
	char	*ch;

	l = lent(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ch = malloc(sizeof(char) * l + 1);
	if (!ch)
		return (NULL);
	if (n < 0)
	{
		ch[0] = '-';
		n *= -1;
	}
	ch[l] = '\0';
	while (n > 0)
	{
		ch[l - 1] = (n % 10) + '0';
		n = n / 10;
		l--;
	}
	return (ch);
}
