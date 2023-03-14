/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:36:53 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/13 23:20:03 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *balls;

	// balls = (t_list *)malloc(sizeof(t_list));
	balls = ft_calloc(1, sizeof(t_list));
	if (!balls)
		return (NULL);
	balls->content = content;
	balls->next = NULL;
	return (balls);
}

