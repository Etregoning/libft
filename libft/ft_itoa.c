/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etregoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 13:32:01 by etregoni          #+#    #+#             */
/*   Updated: 2017/03/10 00:44:54 by etregoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int count;

	count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	count += digits(n);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = '\0';
	while (n > 0)
	{
		str[count - 1] = n % 10 + '0';
		n /= 10;
		count--;
	}
	if (count == 1)
		str[0] = '-';
	return (str);
}
