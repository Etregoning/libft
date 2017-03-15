/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etregoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 21:28:54 by etregoni          #+#    #+#             */
/*   Updated: 2017/03/10 00:43:14 by etregoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *content;
	size_t content_size;

	content = *alst;
	content_size = sizeof(alst);
	del(content, content_size);
	*alst = content->next;
	free(content);
}
