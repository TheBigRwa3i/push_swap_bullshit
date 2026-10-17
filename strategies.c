/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategies.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalroyei <oalroyei@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:39:13 by oalroyei          #+#    #+#             */
/*   Updated: 2026/10/17 15:31:33 by oalroyei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_int(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

void	simple_sort(int *arr, int length)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (i < length - 1)
	{
		min = i;
		j = i + 1;
		while (j < length)
		{
			if (arr[j] < arr[min])
				min = j;
			j++;
		}
		if (min != i)
			swap_int(&arr[i], &arr[min]);
		i++;
	}
}
