/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:32:04 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/14 23:18:47 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	char		*dst2;
// 	const char	*src2;
// 	int			i;

// 	if (len == 0)
// 		return (dst);
// 	dst2 = dst;
// 	src2 = src;
// 	if (src2 < dst2 && src2 + len >= dst2)
// 	{
// 		i = len;
// 		while (i >= 0)
// 		{
// 			dst2[i] = src2[i];
// 			i--;
// 		}
// 	}
// 	else
// 		ft_memcpy(dst, src, len);
// 	return (dst);
// }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*k;
	unsigned const char	*m;
	int					diff;
	int					length;

	diff = src - dst;
	length = (int)len;
	if (dst == src)
		return (dst);
	if (diff < length && diff > 0)
		return (ft_memcpy(dst, src, len));
	else
	{
		k = dst + len - 1;
		m = src + len - 1;
		while (len)
		{
			*k-- = *m--;
			len--;
		}
		k++;
		m++;
	}
	return (k);
}
