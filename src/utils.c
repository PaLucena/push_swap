/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:45:19 by palucena          #+#    #+#             */
/*   Updated: 2023/09/02 22:36:28 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
