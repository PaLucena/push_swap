/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:01:47 by palucena          #+#    #+#             */
/*   Updated: 2023/08/31 20:20:22 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/**
 * @brief Takes as a parameter an element and frees the memory of the element’s
 * 		  content using the function ’del’ given as a parameter and free the
 * 		  element. The memory of ’next’ must not be freed.
 * 
 * @param lst -> the element to free
 * @param del -> the address of the function used to delete the content
 */
void	ft_lstdelone(t_list *lst, void (*del)(int))
{
	t_list	*actual;

	if (!lst || !del)
		return ;
	del(lst->value);
	actual = lst;
	lst = actual->next;
	free(actual);
	lst = 0;
}
