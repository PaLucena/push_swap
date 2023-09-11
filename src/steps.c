/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:44:39 by palucena          #+#    #+#             */
/*   Updated: 2023/09/11 15:34:55 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_all(t_list **a, t_list **b, int max_index)
{
	while (ft_lstsize(*a) > (max_index / 2 + 1) && ft_lstsize(*a) > 3)
	{
		if ((*a)->index <= max_index / 2)
			ft_push(a, b, 'b', true);
		else
			ft_rotate(a, b, 'a', true);
	}
	while (ft_lstsize(*a) > 3)
		ft_push(a, b, 'b', true);
	ft_sort_3(a, b);
}

void	ft_get_cost(t_list **a, t_list **b)
{
	t_list	*curr_b;

	curr_b = *b;
	while (curr_b)
	{
		curr_b->cost_a = 0;
		curr_b->cost_b = 0;
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

	while (ft_min_cost(b)->target_pos != 0)
	{
		current = ft_min_cost(b);
		if (ft_min_cost(b)->target_pos != 0)
		{
			current = ft_min_cost(b);
			if (current->target_pos > ft_lstsize(*a) / 2)
				ft_reverse_rotate(a, b, 'a', true);
			else
				ft_rotate(a, b, 'a', true);
		}
		ft_target_pos(a, b);
	}
}

void	ft_move_cheapest(t_list **a, t_list **b)
{
	t_list	*current;

	while (ft_min_cost(b)->pos != 0)
	{
		current = ft_min_cost(b);
		if (current->pos > ft_lstsize(*b) / 2)
		{
			if (current->target_pos > ft_lstsize(*a) / 2)
				ft_reverse_rotate(a, b, 'r', true);
			else
				ft_reverse_rotate(a, b, 'b', true);
		}
		else
		{
			if (current->target_pos <= ft_lstsize(*a) / 2)
				ft_rotate(a, b, 'r', true);
			else
				ft_rotate(a, b, 'b', true);
		}
		ft_position(*b);
		ft_target_pos(a, b);
	}
	ft_move_a(a, b);
	ft_push(b, a, 'a', true);
}
