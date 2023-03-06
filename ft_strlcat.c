/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:02:18 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/06 21:25:30 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char*dst, const char*src, size_t dstsize)
{
	size_t	i;
	size_t	v;

	i = ft_strlen(dst);
	v = 0;
	if (dstsize <= 0)
		return (i - v + ft_strlen(src));
	while (src[v] && v < dstsize -1)
	{
		dst[i] = src[v];
	v++;
	i++;
	}
	dst[i] = '\0';
	return (i - v + ft_strlen(src));
}
