/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etregoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 12:01:42 by etregoni          #+#    #+#             */
/*   Updated: 2017/03/10 00:57:48 by etregoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t n)
{
	char *st;
	char *su;

	if (*sub == 0)
		return ((char *)str);
	while (*str)
	{
		st = (char *)str;
		su = (char *)sub;
		while (*str && *su && *str == *su)
		{
			str++;
			su++;
			n--;
			if (n == 0)
				break ;
		}
		if (!*su)
			return (st);
		str = st + 1;
		n--;
		if (n == 0)
			break ;
	}
	return (NULL);
}
