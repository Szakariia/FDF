/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 21:03:06 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/11 21:16:03 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*alist;
	t_list	*templst;

	alist = *alst;
	while (alist)
	{
		templst = alist->next;
		del(alist->content, alist->content_size);
		free(alist);
		alist = templst;
	}
	*alst = NULL;
}
