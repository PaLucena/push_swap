/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:43:56 by palucena          #+#    #+#             */
/*   Updated: 2023/09/06 19:43:07 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_maxIndex(t_list **stack)
{
	t_list	*current;
	t_list	*max;

	current = *stack;
	max = *stack;
	while (current)
	{
		if (current->data > max->data)
			max = current;
		current = current->next;
	}
	return (max->pos + 1);
}

void	ft_sort_3(t_list **a, t_list **b)
{
	if (ft_maxIndex(a) == 1)
		ft_rotate(a, b, 'a');
	else if (ft_maxIndex(a) == 2)
		ft_reverse_rotate(a, b, 'a');
	if ((*a)->index > (*a)->next->index)
		ft_swap(a, b, 'a');
}

void	ft_sort_more(t_list **a, t_list **b, int maxIndex)
{

	ft_push_all(a, b, maxIndex);
	while (b)
	{
		ft_target_pos(a, b);
		ft_get_cost(a, b);
		ft_move_cheapest(a, b);
	}
	while (ft_minIndex(a)->pos != 0)
	{
		if (ft_minIndex(a)->pos < ft_lstsize(*a) / 2)
			ft_rotate(a, b, 'a');
		else
			ft_reverse_rotate(a, b, 'a');
	}
}

void	ft_algorithm(t_list **a, t_list **b, int maxIndex)
{
	if (maxIndex == 2)
		ft_swap(a, b, 'a');
	else if (maxIndex == 3)
		ft_sort_3(a, b);
	else
		ft_sort_more(a, b, maxIndex);
}
