/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:44:39 by palucena          #+#    #+#             */
/*   Updated: 2023/09/06 19:47:53 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_all(t_list **a, t_list **b, int maxIndex)
{
	while (ft_lstsize(*a) > (maxIndex / 2 + 1) && ft_lstsize(*a) > 3)
	{
		if ((*a)->index < maxIndex / 2)
			ft_push(a, b, 'b');
		else
			ft_rotate(a, b, 'a');
	}
	while (ft_lstsize(*a) > 3)
		ft_push(a, b, 'b');
	ft_sort_3(a, b);
}

void	ft_get_cost(t_list **a, t_list **b)
{
	t_list	*curr_b;

	curr_b = *b;
	while (curr_b)
	{
		if (curr_b->pos < ft_lstsize(*b) / 2)
			curr_b->cost_b = (curr_b->pos);
		else
			curr_b->cost_b = ft_lstsize(*b) - curr_b->pos;
		if (curr_b->target_pos < ft_lstsize(*a))
			curr_b->cost_a = curr_b->target_pos;
		else
			curr_b->cost_a = ft_lstsize(*a) - curr_b->target_pos;
		curr_b = curr_b->next;
	}
}

void	ft_move_a(t_list **a, t_list **b)
{
	t_list	*current;

	current = ft_minCost(b);
	if (ft_minCost(b)->target_pos != 0)
	{
		current = ft_minCost(b);
		if (current->target_pos > ft_lstsize(*a) / 2)
			ft_reverse_rotate(a, b, 'a');
		else
			ft_rotate(a, b, 'a');
	}
}

void	ft_move_cheapest(t_list **a, t_list **b)
{
	t_list	*current;

	while (ft_minCost(b)->pos != 0)
	{
		current = ft_minCost(b);
		if (current->pos > ft_lstsize(*b) / 2)
		{
			if (current->target_pos > ft_lstsize(*a) / 2)
				ft_reverse_rotate(a, b, 'r');
			else
				ft_reverse_rotate(a, b, 'b');
		}
		else
		{
			if (current->target_pos <= ft_lstsize(*a) / 2)
				ft_rotate(a, b, 'r');
			else
				ft_rotate(a, b, 'b');
		}
		ft_position(*b);
		ft_target_pos(a, b);
		ft_move_a(a, b);
	}
	ft_push(b, a, 'a');
}
