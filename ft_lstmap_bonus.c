/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:16:31 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/18 15:52:35 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*s;
	t_list	*l;

	l = NULL;
	while (lst)
	{
		s = ft_lstnew(f(lst->content));
		if (!s)
		{
			ft_lstclear (&l, del);
			return (NULL);
		}
		ft_lstadd_back(&l, s);
		lst = lst->next;
	}
	return (l);
}
