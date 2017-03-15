/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etregoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 15:35:27 by etregoni          #+#    #+#             */
/*   Updated: 2017/03/09 22:05:25 by etregoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list *res;

	res = (t_list *)malloc(sizeof(t_list));
	content = (const void *)malloc(content_size);
	if (res)
	{
		res->content = (void *)content;
		res->next = NULL;
	}
	return (res);
}
