/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 21:54:24 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/14 20:51:26 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;
	t_list *node;

	if (!lst)
		return (NULL);
	res = f(lst);
	node = res;
	lst = lst->next;
	while (lst)
	{
		node->next = f(lst);
		lst = lst->next;
		node = node->next;
	}
	return (res);
}
