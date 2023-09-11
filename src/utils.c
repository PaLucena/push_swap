/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:45:19 by palucena          #+#    #+#             */
/*   Updated: 2023/09/07 15:45:23 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_clear(t_list **stack)
{
	t_list	*actual;

	while (*stack)
	{
		actual = *stack;
		*stack = actual->next;
		free(actual);
	}
}

t_list	*ft_min_index(t_list **stack)
{
	t_list	*current;
	t_list	*min;

	current = *stack;
	min = current;
	while (current)
	{
		if (current->index < min->index)
		{
			min = current;
			current = *stack;
		}
		else
			current = current->next;
	}
	return (min);
}

t_list	*ft_min_cost(t_list **stack)
{
	t_list	*current;
	t_list	*min;

	current = *stack;
	min = current;
	while (current)
	{
		if (current->cost_a + current->cost_b < min->cost_a + min->cost_b)
		{
			min = current;
			current = *stack;
		}
		else
			current = current->next;
	}
	return (min);
}

void	ft_delete(void *data)
{
	if (data)
		free(data);
}

void	error_msg(int code)
{
	if (code == 1)
		ft_putstr_fd("Error\n", 1);
	exit (1);
}
