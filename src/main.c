/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:15:16 by tdelgran          #+#    #+#             */
/*   Updated: 2023/06/26 11:28:28 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>
void	print_stack(t_list *stack)
{
	while (stack)
	{
		printf("%d\n", stack->data);
		stack = stack->next;
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b = NULL;

	if (argc < 2)
	{
		ft_putendl_fd("Error: Not enough arguments.", 1);
		return (1);
	}
	stack_a = parse_args(argc, argv);
	if (!stack_a)
	{
		ft_putendl_fd("Error: Invalid argument.", 1);
		return (1);
	}
	ft_putendl_fd("Initial stacks:", 1);
	print_stack(stack_a);
	if (ft_lstsize(stack_a) <= 2)
		sort_2(&stack_a);
	else if (ft_lstsize(stack_a) <= 3)
		sort_3(&stack_a);
	else if (ft_lstsize(stack_a) <= 5)
		sort_4_5(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b);
	ft_putendl_fd("Final stacks:", 1);
	print_stack(stack_a);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
    return (0);
}


