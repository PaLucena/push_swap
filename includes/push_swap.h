/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:11:10 by palucena          #+#    #+#             */
/*   Updated: 2023/09/04 18:55:05 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include "lib/libft.h"

/*		actions.c		*/
void	ft_push(t_list **stack_to, t_list **stack_from, char iden);
void	ft_swap(t_list **a, t_list **b, char iden);
void	ft_rotate(t_list **a, t_list **b, char iden);
void	ft_reverse_rotate(t_list **a, t_list **b, int iden);

/*		algorithm.c		*/
void	ft_algorithm(t_list **a, t_list **b, int max_index);

/*		check.c			*/
int		check_args(int ac, char **av);

/*		init.c			*/
t_list	*init_a(t_list *a, int ac, char **av);

/*		step.c			*/
void	ft_push_all(t_list **a, t_list **b, int maxIndex);

/*		utils.c			*/
void	ft_print_stack(t_list *stack);
void	ft_delete(void *data);
void	error_msg(int code);

#endif