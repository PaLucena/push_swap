/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:43:56 by palucena          #+#    #+#             */
/*   Updated: 2023/09/05 18:56:32 by palucena         ###   ########.fr       */
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
	t_list	*tmp;

	tmp = *a;
	ft_push_all(a, b, maxIndex);
	ft_target_pos(a, b);
	ft_get_cost(a, b); // calcular cost_a y cost_b
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
