/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:38:34 by palucena          #+#    #+#             */
/*   Updated: 2023/09/23 16:02:20 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		max_index;

	max_index = check_args(ac, av);
	a = NULL;
	b = NULL;
	a = init_a(a, ac, av);
	if (check_order(&a))
	{
		ft_clear(&a);
		error_msg(0);
	}
	ft_algorithm(&a, &b, max_index);
	ft_clear(&a);
	ft_clear(&b);
	return (0);
}
