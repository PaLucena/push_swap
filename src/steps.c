/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:44:39 by palucena          #+#    #+#             */
/*   Updated: 2023/09/05 18:59:57 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_all(t_list **a, t_list **b, int maxIndex)
{
	while (ft_lstsize(*a) > (maxIndex / 2 + 1) && ft_lstsize(*a) > 3)
	{
		if ((*a)->index <= maxIndex / 2)
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
	t_list	*curr_a;
	t_list	*curr_b;

	curr_a = *a;
	curr_b = *b;
	while (curr_b)
	{
		// cost_a y cost_b de **b
	}
}