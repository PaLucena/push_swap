/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:04:49 by palucena          #+#    #+#             */
/*   Updated: 2023/09/18 09:35:38 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_choose_mov(t_list **a, t_list **b, char *str)
{
	if (ft_strncmp(str, "pa\n", 3) == 0)
		ft_push(b, a, 'a', false);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		ft_push(a, b, 'b', false);
	else if (ft_strncmp(str, "sa\n", 3) == 0)
		ft_swap(a, b, 'a', false);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		ft_swap(a, b, 'b', false);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		ft_swap(a, b, 's', false);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		ft_reverse_rotate(a, b, 'a', false);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		ft_reverse_rotate(a, b, 'b', false);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		ft_reverse_rotate(a, b, 'r', false);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		ft_rotate(a, b, 'a', false);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		ft_rotate(a, b, 'b', false);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		ft_rotate(a, b, 'r', false);
	else
		error_msg(1);
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
