/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:45:19 by palucena          #+#    #+#             */
/*   Updated: 2023/09/04 15:23:51 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_stack(t_list	*stack)
{
	t_list	*actual;

	actual = stack;
	while (actual)
	{
		ft_printf("Elemento: %d\t Indice: %d\n", actual->data, actual->index);
		actual = actual->next;
	}
}

void	ft_delete(void *data)
{
	if (data)
		free(data);
}

void	error_msg(int code)
{
	if (code == 1)
		ft_putstr_fd("\033[31;1mError\n", 1);
	exit (1);
}
