/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:32:04 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/12 22:17:25 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst2;
	const char	*src2;
	int			i;

	if (len == 0)
		return (dst);
	dst2 = dst;
	src2 = src;
	if (src2 < dst2 && src2 + len >= dst2)
	{
		i = len;
		while (i > 0)
		{
			dst2[i] = src2[i];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
