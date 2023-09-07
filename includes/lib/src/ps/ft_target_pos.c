/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_target_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:09:07 by palucena          #+#    #+#             */
/*   Updated: 2023/09/07 14:20:37 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_list	*ft_get_first_res(t_list *curr_a, t_list *curr_b)
{
	t_list	*res;

	res = NULL;
	while (curr_a)
	{
		if (curr_a->data > curr_b->data)
		{
			res = curr_a;
			break ;
		}
		curr_a = curr_a->next;
	}
	return (res);
}

t_list	*ft_get_min_data(t_list **stack)
{
	t_list	*current;
	t_list	*max;

	current = *stack;
	max = *stack;
	while (current)
	{
		if (current->data < max->data)
		{
			max = current;
			current = *stack;
		}
		else
			current = current->next;
	}
	return (max);
}

void	ft_target_pos(t_list **a, t_list **b)
{
	t_list	*curr_a;
	t_list	*curr_b;
	t_list	*res;

	curr_b = *b;
	while (curr_b)
	{
		curr_a = *a;
		if (!ft_get_first_res(curr_a, curr_b))
			res = ft_get_min_data(a);
		else
		{
			res = ft_get_first_res(curr_a, curr_b);
			while (curr_a)
			{
				if (curr_a->data < res->data && curr_a->data > curr_b->data)
					res = curr_a;
				curr_a = curr_a->next;
			}
		}
		curr_b->target_pos = res->pos;
		curr_b = curr_b->next;
	}
}
