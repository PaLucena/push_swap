/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:38:34 by palucena          #+#    #+#             */
/*   Updated: 2023/09/02 23:01:12 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	check_args(ac, av);
	a = NULL;
	b = NULL;
	init_a(&a, ac, av);
	ft_alg(a, b);
}

/*

Cosas por hacer:
1. Crear stack A con respecto a los argumentos comprobados
2. ... 

*/