/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:45:19 by palucena          #+#    #+#             */
/*   Updated: 2023/09/05 12:45:21 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_stack(t_list *a, t_list *b)
{
	t_list	*actual;

	actual = a;
	ft_printf("\n\tStack A:\n");
	if (!actual)
		ft_printf("\t\tVACÍO\n");
	while (actual)
	{
		ft_printf("Elemento: %d\tIndice: %d\tPosición: %d\n", actual->data, actual->index, actual->pos);
		actual = actual->next;
	}
	actual = b;
	ft_printf("\n\tStack B:\n");
	if (!actual)
		ft_printf("\t\tVACÍO\n");
	while (actual)
	{
		ft_printf("Elemento: %d\tIndice: %d\tPosición: %d\tTarget pos: %d\n", actual->data, actual->index, actual->pos, actual->target_pos);
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
