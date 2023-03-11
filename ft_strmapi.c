/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:04:19 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/09 21:28:15 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str1;

	i = 0;
	if (!s)
		return (NULL);
	str1 = (char *)malloc(sizeof(char) * ft_strlen(s) +1);
	if (!str1)
		return (NULL);
	while (s[i])
	{
		str1[i] = f(i, s[i]);
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
