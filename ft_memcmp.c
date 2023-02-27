/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:42:17 by ahmalman          #+#    #+#             */
/*   Updated: 2023/02/27 20:22:30 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		r;
	char	*h;
	char	*x;

	r = 0;
	h = (char *)s1;
	x = (char *)s2;
	while (h[r] == x[r] && n != 0)
	{
		n--;
		r++;
	}
	if (n != 0)
		return (h[r] - x[r]);
	return (0);
}
