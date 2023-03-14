/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:03:23 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/13 21:02:28 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *z1, const char *p2, size_t w)
{
	int				a;
	unsigned char	*b;
	unsigned char	*o;

	o = (unsigned char *)p2;
	b = (unsigned char *)z1;
	a = 0;
	while (o[a] && b[a] && o[a] == b[a] && w != 0)
	{
		a++;
		w--;
	}
	if (w != 0)
		return (b[a] - o[a]);
	return (0);
}
