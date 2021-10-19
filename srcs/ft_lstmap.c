/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucieutat <cieutatulin@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:15:47 by ucieutat          #+#    #+#             */
/*   Updated: 2021/10/19 00:38:18 by ucieutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;
	t_list	*first;

	if (!f || !del || !lst)
		return (NULL);
	newlst = malloc(sizeof(t_list));
	if (!newlst)
		return (NULL);
	newlst = f(lst);
	first = newlst;
	while (lst)
	{
		tmp = f(lst);
		newlst->next = tmp;
		tmp->next = NULL;
		newlst = newlst->next;
		lst = lst->next;
	}
	return (first);
}
