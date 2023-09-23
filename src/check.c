/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:36:23 by palucena          #+#    #+#             */
/*   Updated: 2023/09/23 16:01:40 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

bool	check_order(t_list	**stack)
{
	t_list	*current;
	bool	order;

	order = true;
	current = *stack;
	while (current && current->next)
	{
		if (current->data > current->next->data)
			order = false;
		current = current->next;
	}
	return (order);
}

void	check_int(char **av, int a)
{
	long	nb;
	int		i;

	i = a;
	while (av[i])
	{
		nb = ft_long_atoi(av[i]);
		if (nb > INT32_MAX || nb < INT32_MIN)
			error_msg(1);
		i++;
	}
}

void	check_repeat(char **av, int a)
{
	int	i;
	int	j;

	i = a;
	while (av[i + 1] != NULL)
	{
		j = i;
		while (av[++j] != NULL)
		{
			if (ft_strcmp(av[i], av[j]) == 0)
				error_msg(1);
		}
		i++;
	}
	check_int(av, a);
}

void	check_content(char **av, int a)
{
	int	i;
	int	j;

	i = a;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 0 && av[i][j] != '-' && av[i][j] != '+')
				error_msg(1);
			j++;
		}
		i++;
	}
	check_repeat(av, a);
}

int	check_args(int ac, char **av)
{
	char	**argv;
	int		argc;
	int		i;

	i = 1;
	argv = av;
	argc = ac;
	if (ac < 2)
		error_msg(0);
	else if (ac == 2 && ft_strchr(av[1], ' ') != 0)
	{
		argv = ft_split(av[1], ' ');
		argc = ft_array_len(argv) + 1;
		i--;
	}
	else if (ac == 2)
		error_msg(0);
	check_content(argv, i);
	if (ac != argc)
		ft_del_array(argv);
	return (argc - 1);
}
