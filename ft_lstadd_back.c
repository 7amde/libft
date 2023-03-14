/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:25:01 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/13 23:31:29 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
	{
		*lst = ft_lstlast(*lst);
		(*lst)->next = new;
	}
	else
		*lst = new;
}

// int main() {
// 	t_list *l = ((void *)0);
// 	t_list *n = ft_lstnew(ft_strdup("OK"));

// 	ft_lstadd_back(&l, n);
// 	if (l == n && !strcmp(l->content, "OK"))
// 	{
// 		free(l->next);
// 		free(l);
// 		exit(0);
// 	}
// 	free(l->next);
// 	free(l);
// 	exit(1);
// }