/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:55:47 by ahmalman          #+#    #+#             */
/*   Updated: 2023/02/27 20:21:55 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	o;
	int				n;
	int				h;

	h = 1;
	o = 0;
	n = 0;
	while (str[n] == ' ' || (str[n] >= 9 && str[n] <= 13))
		n++;
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-' )
		h *= -1;
		n++;
	}
	while (str[n] >= 48 && str[n] <= 57)
	{
		o = (str[n] - 48) + (o * 10);
		n++;
	}
	return (o * h);
}