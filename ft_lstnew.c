/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:36:53 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/17 19:31:51 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*balls;

	balls = ft_calloc(1, sizeof(t_list));
	if (!balls)
		return (NULL);
	balls->content = content;
	balls->next = NULL;
	return (balls);
}
