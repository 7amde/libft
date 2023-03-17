/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:55:47 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/17 19:33:15 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

int	ft_atoi(const char *str)
{
	int			n;
	long int	o;
	int			h;

	n = 0;
	o = 0;
	h = 1;
	while (str[n] == ' ' || (str[n] >= 9 && str[n] <= 13))
		n++;
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			h = -1;
		n++;
	}
	while (str[n] >= 48 && str[n] <= 57)
	{
		o = (str[n] - 48) + (o * 10);
		n++;
	}
	if (o > 1844674407370955169 && h == 1)
		return (-1);
	if (o > 1844674407370955169 && h == -1)
		return (0);
	return (o * h);
}
