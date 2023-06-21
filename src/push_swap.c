/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:53:20 by tdelgran          #+#    #+#             */
/*   Updated: 2023/06/21 14:13:35 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_list **src, t_list **dest)
{
	int	tmp;

	if (*src == NULL)
        return ;
	tmp = (*src)->content;
    delete_front(src);
    add_front(dest, tmp);
}

void	swap(t_list **lst)
{
    int	tmp;

    if (*lst == NULL || (*lst)->next == NULL)
        return ;
    tmp = (*lst)->content;
    (*lst)->content = (*lst)->next->content;
    (*lst)->next->content = tmp;
}

void	rotate(t_list **lst)
{
    int	tmp;

	if (*lst == NULL || (*lst)->next == NULL)
        return ;
    tmp = (*lst)->content;
    delete_front(lst);
    add_back(lst, tmp);
}

void	reverse(t_list **lst)
{
    int	tmp;

    if (*lst == NULL || (*lst)->next == NULL)
        return ;
    tmp = (*lst)->content;
    while ((*lst)->next)
        *lst = (*lst)->next;
    tmp = (*lst)->content;
    delete_back(lst);
    add_front(lst, tmp);
}
