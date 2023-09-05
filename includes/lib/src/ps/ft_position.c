/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_position.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:48:23 by palucena          #+#    #+#             */
/*   Updated: 2023/09/05 15:48:47 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_position(t_list *stack)
{
	int	p;

	p = 0;
	while (stack)
	{
		stack->pos = p;
		stack = stack->next;
		p++;
	}
}
