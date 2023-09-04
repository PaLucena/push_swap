/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:03:05 by palucena          #+#    #+#             */
/*   Updated: 2023/09/04 15:10:31 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_index(t_list *stack)
{
	t_list	*current;
	t_list	*tmp;

	current = stack;
	while (current)
	{
		tmp = stack;
		current->index = 1;
		while (tmp)
		{
			if (tmp->data < current->data)
				current->index++;
			tmp = tmp->next;
		}
		current = current->next;
	}
}

void	ft_position(t_list *a)
{
	int	p;

	p = 1;
	while (a)
	{
		a->pos = p;
		a = a->next;
		p++;
	}
}

t_list	*init_a(t_list *a, int ac, char **av)
{
	char	**argv;
	int		maxIndex;
	int		i;

	i = 0;
	maxIndex = ac;
	argv = av;
	if (ac == 2)
	{
		argv = ft_split(av[1], ' ');
		maxIndex = ft_lstsize(a) + 1;
		i--;
	}
	while (argv[++i] != NULL)
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(argv[i])));
	ft_index(a);
	ft_position(a);
	return (a);
}
