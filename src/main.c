/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:15:16 by tdelgran          #+#    #+#             */
/*   Updated: 2023/07/12 09:39:46 by tdelgran         ###   ########.fr       */
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

int	is_sort(t_list *stack_a)
{
	if (!stack_a || !stack_a->next)
		return (1);
	if (stack_a->data > stack_a->next->data)
		return (0);
	return (is_sort(stack_a->next));
}

void	check(t_list *stack_a, t_list *stack_b)
{
	int i;

	i = 0;
	if (is_sort(stack_a))
		return ;
	if (i == 3)
	{
		sort_3(&stack_a);
	}
	// else if (i == 4)
	// {
	// 	sort_4(stack_a, stack_b);
	// }
	// else if (i == 5)
	// {
	// 	sort_5(stack_a, stack_b);
	// }
	// else
	// {
	// 	radix_sort(stack_a, stack_b);
	// }
}

int	main(int argc, char **argv)
{
	t_list	*stack_a = NULL;
	t_list	*stack_b = NULL;

	ft_putendl_fd("Initial stacks:", 1);
	print_stack(stack_a);
	check(&stack_a, &stack_b);
	ft_putendl_fd("Final stacks:", 1);
	print_stack(stack_a);
    return (0);
}


