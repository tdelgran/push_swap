/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:55:19 by tdelgran          #+#    #+#             */
/*   Updated: 2023/06/26 13:15:02 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_number(char *str)
{
	int	i;

	if (str[0] == '+' || str[0] == '-')
		i = 1;
	else
		i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

t_list	*parse_args(int argc, char **argv)
{
	t_list	*lst;
	t_list	*new;
	int		i;

	lst = NULL;
	i = 1;
	while (i < argc)
	{
		if (!is_number(argv[i]))
		{
			ft_lstclear(&lst);
			return (NULL);
		}
		new = ft_lstnew(ft_atoi(argv[i]));
		if (!new)
		{
			ft_lstclear(&lst);
			return (NULL);
		}
		add_back(&lst, ft_atoi(argv[i]));
		i++;
	}
	return (lst);
}






