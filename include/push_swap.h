/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:55:38 by tdelgran          #+#    #+#             */
/*   Updated: 2023/07/12 08:54:45 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef	struct	s_list
{
	int				data;
	struct s_list	*next;
	
}				t_list;

/*FONCTIONS*/
void	add_front(t_list **lst, int content);
void	add_back(t_list **lst, int content);
void	delete_front(t_list **lst);
void	delete_back(t_list **lst);
t_list	*ft_lstnew(int n);
t_list	*parse_args(int argc, char **argv);
void	ft_sa(t_list **stack);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list **stack);
void	ft_rra(t_list **stack);
void	ft_lstclear(t_list **lst);
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	print_stack(t_list *stack);

/*TRI*/
void	sort_2(t_list **lst);
t_list	*sort_3(t_list *stack);
void	sort_4_5(t_list **lst, t_list **lst_b);

/*FONCTIONS UTILS*/
int	ft_atoi(const char *str);
int	ft_isdigit(int c);
void	ft_putendl_fd(char *s, int fd);
int	ft_lstsize(t_list *lst);
void	ft_putstr_fd(char *s, int fd);

#endif