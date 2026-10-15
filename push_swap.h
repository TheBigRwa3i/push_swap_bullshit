/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnazzal <lnazzal@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:05:26 by lnazzal           #+#    #+#             */
/*   Updated: 2026/10/14 19:53:17 by lnazzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>

typedef struct stack
{
	int				value;
	int				current;
	struct stack	*next;
}			t_stack;
t_stack		*stack_new(int value);
t_stack		*stack_last(t_stack *stack);
void		stack_add_back(t_stack **stack, t_stack *new);
void		stack_free(t_stack **stack);
int			stack_size(t_stack *stack);
bool		stack_sorted(t_stack *stack);

#endif
