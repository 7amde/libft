/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:25:47 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/13 23:36:54 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list *new;
// 	t_list *old;

// 	old = NULL;
// 	while (lst)
// 	{
// 		new = ft_lstnew(f(lst->content));
// 		if (!new)
// 		{
// 			ft_lstclear(&old, del);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&old, new);
// 		lst = lst->next;
// 	}
// 	return (old);
// }
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

// #include <string.h>
// #include <stdio.h>

// void *		lstmap_f(void *content) {
// 	(void)content;
// 	return ("OK !");
// }

// int				__delNum = 0;
// void			lstdel_f(void *lst) {
// 	(void)lst;
// 	__delNum++;
// }

// int main() {
// 	t_list *l = ft_lstnew(strdup(" 1 2 3 "));
// 	t_list *ret;

// 	l->next = ft_lstnew(strdup("ss"));
// 	l->next->next = ft_lstnew(strdup("-_-"));
// 	ret = ft_lstmap(l, lstmap_f, lstdel_f);
// 	if (!ret)
// 		printf("im dum\n");
// 	if (!ret->content)
// 		printf("im very dum\n");
// 	if (!strcmp(ret->content, "OK !") && \
// 	!strcmp(ret->next->content, "OK !") && \
// 	!strcmp(ret->next->next->content, "OK !") && \
// 	!strcmp(l->content, " 1 2 3 ") && \
// 	!strcmp(l->next->content, "ss") && \
// 	!strcmp(l->next->next->content, "-_-"))
// 		exit(0);
// 	exit(1);

// }


// // #include <string.h>

// // int main() {
// // 	t_list	*chungus = ft_calloc(5, sizeof(t_list));	

// // 	int i = -1;
// // 	while (++i < 5) {
// // 		chungus->content = ft_strdup("chicken");
// // 		chungus->next = ;
// // 	}
// // }