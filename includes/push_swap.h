/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:11:10 by palucena          #+#    #+#             */
/*   Updated: 2023/09/02 22:12:45 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include "lib/libft.h"

/*		utils.c			*/
void	ft_delete(void *data);
void	error_msg(int code);

/*		check.c			*/
void	check_args(int ac, char **av);

/*		init.c			*/
void	init_a(t_list **a, int ac, char **av);

/*		actions.c		*/
void	ft_push(t_list *a, t_list *b, char iden);
void	ft_swap(t_list *a, t_list *b, char iden);
void	ft_rotate(t_list *a, t_list *b, char iden);
void	ft_reverse_rotate(t_list *a, t_list *b, int iden);

#endif