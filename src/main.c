/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:38:34 by palucena          #+#    #+#             */
/*   Updated: 2023/09/07 14:22:39 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_is_sorted(t_list **stack)
{
	t_list	*actual;
	bool	order;

	order = true;
	actual = *stack;
	while (actual->next)
	{
		if (actual->next->data < actual->data)
			order = false;
		actual = actual->next;
	}
	if (order)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		max_index;

	max_index = check_args(ac, av);
	a = NULL;
	b = NULL;
	a = init_a(a, ac, av);
	ft_algorithm(&a, &b, max_index);
	ft_is_sorted(&a);
	ft_clear(&a);
	ft_clear(&b);
}
