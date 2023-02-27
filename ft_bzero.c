/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:23:32 by ahmalman          #+#    #+#             */
/*   Updated: 2023/02/27 20:21:59 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *h, size_t l)
{
	int	c;

	c = 0;
	while (c < l)
	{
		((char *)h)[c] = 0;
		c++;
	}
}
// #include <stdio.h>
// void	ahmad(int *c)
// {
// 	// printf("%d\n", c);
// 	*c = 10;
// 	// printf("%d\n", c);
// 	// return(c);
// }o
// int main()
// {
// 	int	c;

// 	c = 1;
// 	printf("%d\n", c);
// 	ahmad(&c);
// 	printf("%d\n", c);
// 	return(0);
// }