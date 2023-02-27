/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:27:49 by ahmalman          #+#    #+#             */
/*   Updated: 2023/02/27 20:22:33 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t o)
{
	int				t;
	unsigned char	*src1;

	t = 0;
	src1 = (unsigned char *)src;
	while (t < o)
	{
		((unsigned char *)dest)[t] = src1[t];
		t++;
	}
}
