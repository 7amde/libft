/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:52:46 by ahmalman          #+#    #+#             */
/*   Updated: 2023/02/27 20:25:28 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b ,int c, size_t n)
{
	int u;

	u = 0;
	while (n > u)
	{
		(unsigned char *)b =(unsigned char)c;
		b++;
		u++;
	}
}
 