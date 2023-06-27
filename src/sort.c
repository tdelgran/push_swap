/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 09:40:20 by tdelgran          #+#    #+#             */
/*   Updated: 2023/06/26 13:16:33 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_2(t_list **lst)
{
	if ((*lst)->data > (*lst)->next->data)
		swap_sa(lst);
}

void	sort_3(t_list **lst)
{
	int a = (*lst)->data;
	int b = (*lst)->next->data;
	int c = (*lst)->next->next->data;

	if (a < b && a < c)
	{
		if (b > c)
			swap_sa(lst);
	}
	else if (b < a && b < c)
	{
		if (a > c)
			swap_sa(lst);
		reverse_rra(lst);
	}
	else if (c < a && c < b)
	{
		if (a < b)
			swap_sa(lst);
		rotate_ra(lst);
	}
}

void	sort_4_5(t_list **lst, t_list **lst_b)
{
	int size;
	int i;
	int min_index;
	
	size = 0;
	i = 0;
	min_index = 0;
	while (i++ < size)
	{
		if ((*lst)->data < (*lst)->next->data)
			min_index = i;
		rotate_ra(lst);
	}
	i = 0;
	while (i++ < min_index)
		reverse_rra(lst);
	push_pa(lst, lst_b);
	if (size == 4)
		sort_3(lst);
	else
		sort_4_5(lst, lst_b);
	push_pa(lst_b, lst);
}
