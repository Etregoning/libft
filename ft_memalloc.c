/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etregoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 20:42:30 by etregoni          #+#    #+#             */
/*   Updated: 2017/03/10 00:48:33 by etregoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int *ptr;

	ptr = (int *)malloc(sizeof(size));
	if (size > 4294967295)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
    ft_memset(ptr, 0, sizeof(ptr));
	return (ptr);
}
