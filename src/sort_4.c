/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodelgrange <theodelgrange@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:55:35 by theodelgran       #+#    #+#             */
/*   Updated: 2023/07/28 17:27:40 by theodelgran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int find_min(t_list *stack)
{
    int min_value;

    if (!stack)
        return (0);
    min_value = stack->data;
    stack = stack->next;
    while (stack)
    {
        if (stack->data < min_value)
            min_value = stack->data;
        stack = stack->next;
    }
    return (min_value);
}

void    push_min(t_list **stack_a, t_list **stack_b)
{
    int min;

    min = find_min(*stack_a);
    while ((*stack_a)->data != min)
    {
        ft_rra(stack_a);
    }
    ft_pb(stack_a, stack_b);
}

t_list  *sort_4(t_list **stack_a, t_list **stack_b)
{
    push_min(stack_a, stack_b);
    sort_3(*stack_a);
    print_stack(*stack_a);
    ft_pa(stack_a, stack_b);
    return (*stack_a);
}