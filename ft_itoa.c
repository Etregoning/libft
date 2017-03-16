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
#include <stdio.h>
char		*ft_itoa(int n)
{
	char	*str;

	str = 0;
	return(ft_itoa_base(n, str, 10));
}

int main(void)
{
	char	*i1 = ft_itoa(-2147483648);
	char	*i2 = ft_itoa(156);
	char	*i3 = ft_itoa(-0);
	printf("%s\n", i1);
	printf("%s\n", i2);
	printf("%s\n", i3);
}