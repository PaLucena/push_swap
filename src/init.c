/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:03:05 by palucena          #+#    #+#             */
/*   Updated: 2023/09/02 23:24:49 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_a(t_list **a, int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		ac = ft_array_len(av);
		i--;
	}
	while (av[++i])
		ft_lstadd_back(a, ft_lstnew(ft_atoi(av[i])));
	// poner el index, pos y algo mas?
}
