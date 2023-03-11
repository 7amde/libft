/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:08:02 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/09 21:28:33 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *e, int a)
{
	char	*w;

	w = (char *)e;
	while (w != '\0')
	{
		if (w == (char)a)
			return (w);
		w++;
	}
	return (NULL);
}
