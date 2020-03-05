/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdardari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 17:28:19 by hdardari          #+#    #+#             */
/*   Updated: 2019/04/11 19:50:04 by hdardari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	if (!(node = (t_list *)malloc(sizeof(*node))))
		return (NULL);
	if (content == NULL)
	{
		node->content = NULL;
		node->content_size = 0;
		node->next = NULL;
	}
	else
	{
		if (!(node->content = malloc(sizeof(content_size))))
			return (NULL);
		ft_memcpy(((void *)node->content), content, content_size);
		node->content_size = content_size;
	}
	node->next = NULL;
	return (node);
}
