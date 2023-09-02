/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:43:56 by palucena          #+#    #+#             */
/*   Updated: 2023/09/02 23:00:35 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_alg(t_list *a, t_list *b)
{
	if (ft_lstsize(a) == 2)
		ft_swap(a, b, 'a');
	else if (ft_lstsize(a) == 3)
	{
		if (a->index == 3)
			ft_rotate(a, b, 'a');
		else if (a->next->index == 3)
			ft_reverse_rotate(a, b, 'a');
		if (a->index > a->next->index)
			ft_swap(a, b, 'a');
	}
	else
		ft_alg_more(a, b);
}
