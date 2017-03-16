/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etregoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 00:11:39 by etregoni          #+#    #+#             */
/*   Updated: 2017/03/10 00:49:08 by etregoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *elem;

	new = (t_list *)malloc(sizeof(t_list));
	elem = lst;
	while (lst != NULL)
	{
		f(elem);
		lst = lst->next;
		new = lst->next;
	}
	return (new);
}
