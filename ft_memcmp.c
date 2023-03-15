/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 23:27:29 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/14 23:27:42 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				r;
	unsigned char	*h;
	unsigned char	*x;

	r = 0;
	h = (unsigned char *)s1;
	x = (unsigned char *)s2;
	while (n > 0)
	{
		if (h[r] != x[r])
			return (h[r] - x[r]);
		r++;
		n--;
	}
	return (0);
}
