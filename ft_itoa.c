/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:08:14 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/13 22:42:20 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	longlongmannnnnnn(int c)
{
	int	i;

	if (c < 0)
		i = 1;
	else
		i = 0;
	while (c)
	{
		c /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int num)
{
	int				i;
	char			*s;
	int				k;
	long int		j;

	j = num;
	k = longlongmannnnnnn(num);
	if (!num)
		return (ft_strdup("0"));
	s = (char *)malloc(sizeof(char) * (k + 1));
	if (!s)
		return (0);
	i = k;
	s[i--] = '\0';
	if (j < 0)
	{
		s[0] = '-';
		j = -j;
	}
	while (j)
	{
		s[i--] = j % 10 + '0';
		j /= 10;
	}
	return (s);
}
