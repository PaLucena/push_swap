/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:45:19 by palucena          #+#    #+#             */
/*   Updated: 2023/08/31 18:01:28 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Crear distintos mensajes de error

void	error_msg(int code)
{
	ft_putstr_fd("\033[31;1mError:\n", 1);
	if (code == 0)
		ft_putstr_fd("Not enough arguments\n", 1);
	else if (code == 1)
		ft_putstr_fd("Parameters include characters\n", 1);
	else if (code == 2)
		ft_putstr_fd("Found repeated number\n", 1);
	else if (code == 3)
		ft_putstr_fd("Parameters must fit inside int\n", 1);
	else if (code == 4)
		ft_putstr_fd("Arguments have the correct order\n", 1);
	else
		ft_putstr_fd("KLK\n", 1);
	exit (1);
}
