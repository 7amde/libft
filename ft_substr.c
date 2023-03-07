/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:26:14 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/07 17:42:35 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str9;

	i = 0;
	if (!s)
		return (NULL);
	str9 = (char *)malloc (sizeof (char) * len +1);
	if (!str9)
		return (NULL);
	while (i < len)
	{
		str9[i] = s[start];
		i++;
		start ++;
	}
return (str9);	
}