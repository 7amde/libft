/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:08:30 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/09 21:44:59 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	strs(const char *s, char c)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			t++;
			i++;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (t);
}
char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		t;
	int		h;
	int		m;
	int		n;

	m = 0;
	h = 0;
	n = -1;
	i = 0;
	t = strs(s, c);
	str = (char **)malloc(sizeof(char *) * t + 1);
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
			n++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			m++;
		}
		str[n] = (char *)malloc(sizeof(char) * m + 1);
		h = 0;
		while (h < m)
		{
			str[n][h] = s[i - m + h];
			h++;
		}
		str[n][h] = '\0';
		while (s[i] == c && s[i] != '\0')
			i++;
		m = 0;
	}
	return (str);
}

// int main()
// {
// 	int i = 0;
// 	char ** monkey;
// 	monkey = ft_split("y    a     b    df   g", ' ');
// 	while (monkey[i])
// 	{
// 		printf ("%s\n", monkey[i]);
// 		i++;
// 	}
// }