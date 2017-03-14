/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etregoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 22:06:12 by etregoni          #+#    #+#             */
/*   Updated: 2017/03/10 00:42:50 by etregoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;
	t_list *next;
	size_t content_size;

	current = *alst;
	content_size = sizeof(alst);
	while (current != NULL)
	{
		next = current->next;
		del(current, content_size);
		free(current);
		current = next;
	}
	*alst = NULL;
}
