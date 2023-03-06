/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:27:11 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/06 21:23:01 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		n;
	char	*str0;

	i = 0;
	n = 0;
	if (!s1 || !s2)
		return (NULL);
	str0 = (char *) malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) +1);
	if (!str0)
		return (NULL);
	while (s1[i])
	{
		str0[i] = s1[i];
		i++;
	}
	while (s2[n])
	{
		str0[i] = s2[n];
		i++;
		n++;
	}
	str0[i] = '\0';
	return (str0);
}
