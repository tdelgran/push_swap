/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodelgrange <theodelgrange@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:36:10 by theodelgran       #+#    #+#             */
/*   Updated: 2023/07/28 17:38:58 by theodelgran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list  *sort_5(t_list **stack_a, t_list **stack_b)
{
    push_min(stack_a, stack_b);
    push_min(stack_a, stack_b);
    sort_3(*stack_a);
    ft_pa(stack_a, stack_b);
    ft_pa(stack_a, stack_b);
    print_stack(*stack_a);
    return (*stack_a);
}