/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:28:58 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/13 22:31:14 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	f;
	size_t	i;
	char	*srt;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
		i++;
	}
	if (*s1 == '\0')
		return (ft_strdup(""));
	f = ft_strlen(s1);
	while (ft_strchr(set, s1[f]))
		f--;
	srt = (char *)ft_substr(s1, 0, f + 1);
	s1 -= i;
	return (srt);
}
