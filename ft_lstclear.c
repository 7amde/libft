/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:52:30 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/14 21:36:27 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*back;
	t_list	*front;

	if (!lst || !del || !(*lst))
		return ;
	front = *lst;
	while (front)
	{
		back = front->next;
		ft_lstdelone(front, del);
		front = back;
	}
	*lst = NULL;
}
