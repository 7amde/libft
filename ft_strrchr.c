/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:25:43 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/13 20:53:54 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *j, int z)
{
	int		q;
	char	*h;

	h = (char *)j;
	q = ft_strlen(j);
	while (q != -1)
	{
		if (h[q] == (char)z)
			return (h + q);
		q--;
	}
	return (NULL);
}
