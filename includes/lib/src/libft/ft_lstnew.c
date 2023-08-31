/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:01:20 by palucena          #+#    #+#             */
/*   Updated: 2023/08/31 20:18:54 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new element. The variable
 * 		  ’content’ is initialized with the value of the parameter ’content’.
 * 
 * @param content -> The content to create the new element with.
 * @return t_list* -> The new element.
 */
t_list	*ft_lstnew(int value)
{
	t_list	*new_l;

	new_l = malloc(sizeof(t_list));
	if (!new_l)
		return (0);
	new_l->value = value;
	new_l->next = 0;
	return (new_l);
}
