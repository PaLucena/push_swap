/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:43:56 by palucena          #+#    #+#             */
/*   Updated: 2023/09/11 15:37:04 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_max_index(t_list **stack)
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
	if (ft_max_index(a) == 1)
		ft_rotate(a, b, 'a', true);
	else if (ft_max_index(a) == 2)
		ft_reverse_rotate(a, b, 'a', true);
	if ((*a)->index > (*a)->next->index)
		ft_swap(a, b, 'a', true);
}

void	ft_sort_more(t_list **a, t_list **b, int max_index)
{
	ft_push_all(a, b, max_index);
	while (*b)
	{
		ft_target_pos(a, b);
		ft_get_cost(a, b);
		ft_move_cheapest(a, b);
	}
	while (ft_min_index(a)->pos != 0)
	{
		if (ft_min_index(a)->pos < ft_lstsize(*a) / 2)
			ft_rotate(a, b, 'a', true);
		else
			ft_reverse_rotate(a, b, 'a', true);
	}
}

void	ft_algorithm(t_list **a, t_list **b, int max_index)
{
	if (max_index == 2)
		ft_swap(a, b, 'a', true);
	else if (max_index == 3)
		ft_sort_3(a, b);
	else
		ft_sort_more(a, b, max_index);
}
