/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:04:49 by palucena          #+#    #+#             */
/*   Updated: 2023/09/11 15:36:27 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_choose_mov(t_list **a, t_list **b, char *str)
{
	if (ft_strncmp(str, "pa", 2) == 0)
		ft_push(b, a, 'a', false);
	else if (ft_strncmp(str, "pb", 2) == 0)
		ft_push(a, b, 'b', false);
	else if (ft_strncmp(str, "sa", 2) == 0)
		ft_swap(a, b, 'a', false);
	else if (ft_strncmp(str, "sb", 2) == 0)
		ft_swap(a, b, 'b', false);
	else if (ft_strncmp(str, "ss", 2) == 0)
		ft_swap(a, b, 's', false);
	else if (ft_strncmp(str, "rra", 3) == 0)
		ft_reverse_rotate(a, b, 'a', false);
	else if (ft_strncmp(str, "rrb", 3) == 0)
		ft_reverse_rotate(a, b, 'b', false);
	else if (ft_strncmp(str, "rrr", 3) == 0)
		ft_reverse_rotate(a, b, 'r', false);
	else if (ft_strncmp(str, "ra", 2) == 0)
		ft_rotate(a, b, 'a', false);
	else if (ft_strncmp(str, "rb", 2) == 0)
		ft_rotate(a, b, 'b', false);
	else if (ft_strncmp(str, "rr", 2) == 0)
		ft_rotate(a, b, 'r', false);
}

void	ft_apply(t_list **a, t_list **b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		ft_choose_mov(a, b, str);
		str = get_next_line(0);
	}
}
