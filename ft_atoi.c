/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etregoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:12:39 by etregoni          #+#    #+#             */
/*   Updated: 2017/03/10 00:37:41 by etregoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*trim(const char *s)
{
	const char	*res;

	while (*s == ' ' || *s == '\n' || *s == '\t' || *s == '\f' ||
			*s == '\r' || *s == '\v' || *s == '+')
	{
		s++;
	}
	res = s;
	return (res);
}

static int			limit(long long n, const char *s, int sign)
{
	long long	limit_min;
	long long	limit_max;

	limit_min = ((n * 10) + (*s - '0')) * sign;
	if (limit_min < -2147483648)
		return (0);
	limit_max = ((n * 10) + (*s - '0')) * sign;
	if (limit_max > 2147483647)
		return (-1);
	return (1);
}

int					ft_atoi(const char *str)
{
	int			num;
	int			sign;
	const char	*trimmed;
	int			limit_test;

	num = 0;
	trimmed = trim(str);
	sign = (*trimmed == '-') * -2 + 1;
	if (*trimmed == '-')
		trimmed++;
	while (*trimmed >= '0' && *trimmed <= '9')
	{
		limit_test = limit(num, trimmed, sign);
		if (limit_test == 0 || limit_test == -1)
			return (limit_test);
		num = num * 10 + *trimmed++ - '0';
	}
	return (num * sign);
}
