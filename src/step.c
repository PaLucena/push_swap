/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:44:39 by palucena          #+#    #+#             */
/*   Updated: 2023/09/04 19:15:46 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_all(t_list **a, t_list **b, int maxIndex)
{
	while (ft_lstsize(*a) > maxIndex / 2)
	{
		if ((*a)->index <= maxIndex / 2)
			ft_push(b, a, 'a');
		else
			ft_rotate(a, b, 'a');
		*a = (*a)->next;
	}
	while (ft_lstsize(*a) > 3)
	{
		ft_push(b, a, 'a');
		*a = (*a)->next;
	}
}
