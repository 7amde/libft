/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:25:43 by ahmalman          #+#    #+#             */
/*   Updated: 2023/02/27 20:24:30 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *j, int z)
{
	int		q;
	char	*h;

	h = (char *)j;
	q = ft_strlen(j);
	while (q != 0)
	{
		if (h[q] == (char)z)
			return (h);
	}
	return (NULL);
}
