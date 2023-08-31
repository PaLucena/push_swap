/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:29:21 by palucena          #+#    #+#             */
/*   Updated: 2023/08/31 19:36:48 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include "lib/libft.h"


typedef struct s_stack
{
	int				nb;
	int				index;
	struct s_stack	*next;
}					t_stack;

/*		utils.c			*/
void	error_msg(int code);

/*		check.c			*/
void	check_args(int ac, char **av);

#endif