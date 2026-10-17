/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnazzal <lnazzal@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:00:04 by lnazzal           #+#    #+#             */
/*   Updated: 2026/10/17 18:10:02 by lnazzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ra(t_stack *stack_a)
{
	int	temp;
	t_stack	*last;

	if (!stack_a || !stack_a->next)
		return ;
	temp = stack_a->value;
	last = stack_last(stack_a);
	while (stack_a->next != last)
	{
		stack_a->value = stack_a->next->value;
		stack_a = stack_a->next;
	}
	last->value = temp;
}
