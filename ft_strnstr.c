/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:04:33 by ahmalman          #+#    #+#             */
/*   Updated: 2023/02/27 20:24:23 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		c;
	char	*g;
	char	*x;

	c = 0;
	i = 0;
	g = (char *)haystack;
	x = (char *)needle;
	while (g[i] != '\0' && i < len)
	{
		if (g[i] == x[c])
		{
			i++;
			c++;
		}
		else if (x[c] == '\0')
			return (g[i]);
		else
		{
			c = 0;
			i++;
		}
	}
	return (NULL);
}
