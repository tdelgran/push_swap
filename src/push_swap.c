/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:53:20 by tdelgran          #+#    #+#             */
/*   Updated: 2023/06/26 13:11:40 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_pa(t_list **src, t_list **dest)
{
	int	tmp;

	if (*src == NULL)
        return ;
	tmp = (*src)->data;
    delete_front(src);
    add_front(dest, tmp);
}

void	swap_sa(t_list **lst)
{
    int	tmp;

    if (*lst == NULL || (*lst)->next == NULL)
        return ;
    tmp = (*lst)->data;
    (*lst)->data = (*lst)->next->data;
    (*lst)->next->data = tmp;
}

void	rotate_ra(t_list **lst)
{
    int	tmp;

	if (*lst == NULL || (*lst)->next == NULL)
        return ;
    tmp = (*lst)->data;
    delete_front(lst);
    add_back(lst, tmp);
}

void	reverse_rra(t_list **lst)
{
    int	tmp;

    if (*lst == NULL || (*lst)->next == NULL)
        return ;
    tmp = (*lst)->data;
    while ((*lst)->next)
        *lst = (*lst)->next;
    tmp = (*lst)->data;
    delete_back(lst);
    add_front(lst, tmp);
}
