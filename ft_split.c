/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:08:30 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/15 21:51:49 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*m_free(char **str, int i)
{
	int	r;

	r = 0;
	while (r < i)
	{
		free (str[r]);
	r++;
	}	
	free (str);
	return (NULL);
}

void	fun(char *str, const char *s, int i, int m)
{
	int	h;

	h = 0;
	while (h < m)
	{
		str[h] = s[i - m + h];
		h++;
	}
}

int	ss_trs(const char *s, char c)
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

char	**part2(const char *s, char c, char **str, int i)
{
	int		m;
	int		n;

	n = 0;
	while (s[i] && ss_trs(s, c) > 0)
	{
		m = 0;
		if (s[i] != c && s[i] != '\0' && i != 0)
			n++;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			m++;
		}
		str[n] = (char *)ft_calloc(sizeof(char), m + 1);
		if (!str[n])
			return (m_free (str, n));
		fun(str[n], s, i, m);
		while (s[i] == c && s[i])
			i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)ft_calloc(sizeof(char *), ss_trs(s, c) + 1);
	if (!str)
		return (NULL);
	return (part2(s, c, str, 0));
}

// int main()
// {
// 	int i = 0;
// 	char ** monkey;
// 	monkey = ft_split(" 3    234234       ergert      ", ' ');
// 	while (monkey[i])
// 	{
// 		printf ("|%s|\n", monkey[i]);
// 		i++;
// 	}
// }
