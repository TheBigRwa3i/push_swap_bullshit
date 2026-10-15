/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnazzal <lnazzal@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 19:46:25 by lnazzal           #+#    #+#             */
/*   Updated: 2026/10/14 20:17:53 by lnazzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_stack	*parse_arg(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*new;
	int		i;
	int		value;

	a = NULL;
	i = 1;
	while (i < argc)
	{
		if (!is_valid_number(argv[i]))
			return (stack_free(&a), NULL);
		value = parse_number(argv[i]);
		new = stack_new(value);
		if (!new)
			return (stack_free(&a), NULL);
		stack_add_back(&a, new);
		i++;
	}
	if (has_duplicate(a))
		return (stack_free(&a), NULL);
	return (a);
}

int	is_valid_number(char *value)
{
	int	i;

	if (!value || !value[0])
		return (0);
	i = 0;
	if (value[i] == '-' || value[i] == '+')
		i++;
	if (!value[i])
		return (0);
	while (value[i])
	{
		if (value[i] < '0' && value[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
