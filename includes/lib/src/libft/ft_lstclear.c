/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:19:51 by palucena          #+#    #+#             */
/*   Updated: 2023/09/02 21:04:50 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/**
 * @brief Deletes and frees the given element and every successor of that 
 * 		  element, using the function ’del’ and free(3). Finally,
 * 		  the pointer to the list must be set to NULL.
 * 
 * @param lst -> address of a pointer to an element
 * @param del -> address of the function used to delete the content of the
 * 				 element
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*actual;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->data);
		actual = *lst;
		*lst = actual->next;
		free(actual);
	}
	*lst = 0;
}
