/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:03:23 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/09 21:24:40 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *z1, const char *p2, size_t w)
{
	int		a;
	char	*b;
	char	*o;

	o = (char *)p2;
	b = (char *)z1;
	a = 0;
	while (o[a] == b[a] && w != 0)
	{
		a++;
		w--;
	}
	if (w != 0)
		return (o[a] - b[a]);
	return (0);
}
