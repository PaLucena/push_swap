/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:38:34 by palucena          #+#    #+#             */
/*   Updated: 2023/09/05 18:54:42 by palucena         ###   ########.fr       */
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
	int		maxIndex;

	maxIndex = check_args(ac, av);
	a = NULL;
	b = NULL;
	a = init_a(a, ac, av);
	puts("ANTES:");
	ft_print_stack(a, b);
	ft_algorithm(&a, &b, maxIndex);
	puts("DESPUÉS:");
	ft_print_stack(a, b);
	//ft_is_sorted(&a);
}


/*

1. Calcular cost_a y cost_b
2. Buscar el nº con menor coste
3. Mover ese nº a su sitio

*/