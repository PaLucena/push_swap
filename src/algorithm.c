/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:43:56 by palucena          #+#    #+#             */
/*   Updated: 2023/09/04 18:44:23 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_3(t_list **a, t_list **b)
{
	if ((*a)->index == 3)
		ft_rotate(a, b, 'a');
	else if ((*a)->next->index == 3)
		ft_reverse_rotate(a, b, 'a');
	if ((*a)->index > (*a)->next->index)
		ft_swap(a, b, 'a');
}

void	ft_sort_more(t_list **a, t_list **b, int maxIndex)
{
	t_list	*tmp;

	tmp = *a;
	ft_push_all(a, b, maxIndex);
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
