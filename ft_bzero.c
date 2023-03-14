/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:23:32 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/13 20:23:14 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *h, size_t l)
{
	size_t	c;

	c = 0;
	while (c < l)
	{
		((char *)h)[c] = 0;
		c++;
	}
}
