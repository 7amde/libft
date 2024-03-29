/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:02:18 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/14 23:31:36 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	i;
	size_t	s;

	if (!dst && dstsize == 0)
		return (0);
	s = ft_strlen(src);
	d = ft_strlen(dst);
	if (d >= dstsize)
		return (dstsize + s);
	i = 0;
	while (i < s && i + d + 1 < dstsize)
	{
		dst[d + i] = src[i];
		i++;
	}
		dst[d + i] = '\0';
	if (dstsize < d)
		d = dstsize;
	return (d + s);
}
