/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:08:49 by tdelgran          #+#    #+#             */
/*   Updated: 2023/06/26 13:11:28 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_lstnew(int n)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = n;
	new->next = NULL;
	return (new);
}

void	add_front(t_list **lst, int content)
{
    t_list	*new;

    new = ft_lstnew(content);
    if (*lst)
        new->next = *lst;
    *lst = new;
}

void	add_back(t_list **lst, int content)
{
    t_list	*new;
    t_list	*tmp;

    new = ft_lstnew(content);
    if (!*lst)
    {
        *lst = new;
        return;
    }
    tmp = *lst;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
}

void	delete_front(t_list **lst)
{
    t_list	*tmp;

    if (*lst == NULL)
        return ;
    tmp = (*lst)->next;
    free(*lst);
    *lst = tmp;
}

void	delete_back(t_list **lst)
{
    t_list	*tmp;
    t_list	*prev;

    if (*lst == NULL)
        return ;
    tmp = *lst;
    prev = NULL;
    while (tmp->next)
    {
        prev = tmp;
        tmp = tmp->next;
    }
    if (prev)
        prev->next = NULL;
    else
        *lst = NULL;
    free(tmp);
}
