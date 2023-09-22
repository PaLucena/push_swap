/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:11:10 by palucena          #+#    #+#             */
/*   Updated: 2023/09/22 16:13:11 by palucena         ###   ########.fr       */
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
void	ft_push(t_list **stack_from, t_list **stack_to, char iden, bool pr);
void	ft_swap(t_list **a, t_list **b, char iden, bool pr);
void	ft_rotate(t_list **a, t_list **b, char iden, bool pr);
void	ft_reverse_rotate(t_list **a, t_list **b, int iden, bool pr);

/*		algorithm.c		*/
void	ft_sort_3(t_list **a, t_list **b);
void	ft_algorithm(t_list **a, t_list **b, int max_index);

/*		check.c			*/
int		check_args(int ac, char **av, bool ch);

/*		init.c			*/
void	ft_position(t_list *stack);
void	ft_target_pos(t_list **a, t_list **b);
t_list	*init_a(t_list *a, int ac, char **av);

/*		step.c			*/
void	ft_push_all(t_list **a, t_list **b, int maxIndex);
void	ft_get_cost(t_list **a, t_list **b);
void	ft_move_cheapest(t_list **a, t_list **b);

/*		utils.c			*/
void	ft_clear(t_list **stack);
t_list	*ft_min_index(t_list **stack);
t_list	*ft_min_cost(t_list **stack);
void	ft_delete(void *data);
void	error_msg(int code);

/*		bonus_utils.c	*/
void	ft_apply(t_list **a, t_list **b);

#endif