/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:25:47 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/17 19:29:40 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*old;
	t_list	*new;
	void	*new_content;
	t_list	*temp;

	old = lst;
	new = NULL;
	while (old != NULL)
	{
		new_content = (*f)(old->content);
		temp = ft_lstnew(new_content);
		if (temp == NULL)
		{
			(*del)(new_content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		old = old->next;
	}
	return (new);
}
