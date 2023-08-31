/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:47:35 by palucena          #+#    #+#             */
/*   Updated: 2023/08/31 20:22:15 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ to the content
 * 		  of each element.
 * 
 * @param lst -> The address of a pointer to an element.
 * @param f -> The address of the function used to iterate on the list.
 */
void	ft_lstiter(t_list *lst, void (*f)(int))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->value);
		lst = lst->next;
	}
}
