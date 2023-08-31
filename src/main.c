/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:38:34 by palucena          #+#    #+#             */
/*   Updated: 2023/08/31 20:16:14 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_a(t_list *a, int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		ac = ft_array_len(av);
		i--;
	}
	while (av[i])
	{
		ft_lstadd_back();
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	check_args(ac, av);
	a = NULL;
	b = NULL;
	init_a(a, ac, av);
}

/*

Cosas por hacer:
1. Arreglar libft para que la struct t_list sea util
2. Crear stack A con respecto a los argumentos comprobados
3. ... 

*/