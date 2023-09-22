/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:00:46 by palucena          #+#    #+#             */
/*   Updated: 2023/09/22 16:42:37 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_is_sorted(t_list **a, t_list *b)
{
	t_list	*actual;
	bool	order;

	order = true;
	actual = NULL;
	if (*a)
		actual = *a;
	while (actual && actual->next)
	{
		if (actual->next->data < actual->data)
			order = false;
		actual = actual->next;
	}
	if (order && !b)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		max_index;

	max_index = check_args(ac, av, true);
	a = NULL;
	b = NULL;
	a = init_a(a, ac, av);
	ft_apply(&a, &b);
	ft_is_sorted(&a, b);
	ft_clear(&a);
	ft_clear(&b);
}
