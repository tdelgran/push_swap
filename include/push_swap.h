/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:55:38 by tdelgran          #+#    #+#             */
/*   Updated: 2023/06/21 14:14:44 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_list
{
	int				content;
	struct s_list	*next;
}				t_list;

/*FONCTIONS*/
void	add_front(t_list **lst, int content);
void	add_back(t_list **lst, int content);
void	delete_front(t_list **lst);
void	delete_back(t_list **lst);


#endif