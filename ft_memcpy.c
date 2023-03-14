/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:27:49 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/13 20:29:53 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t o)
{
	size_t			t;
	unsigned char	*src1;

	t = 0;
	if (dest == src)
		return (dest);
	src1 = (unsigned char *)src;
	while (t < o)
	{
		((unsigned char *)dest)[t] = src1[t];
		t++;
	}
	return (dest);
}
