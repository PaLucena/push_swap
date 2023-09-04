/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:36:23 by palucena          #+#    #+#             */
/*   Updated: 2023/09/04 15:44:14 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_order(char **av, int a)
{
	int		i;
	bool	order;

	i = a;
	order = true;
	while (av[i] && av[i + 1] != NULL)
	{
		if (ft_atoi(av[i]) > ft_atoi(av[i + 1]))
			order = false;
		i++;
	}
	if (order)
		error_msg(0);
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
	check_order(av, a);
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
				error_msg(2);
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
	return (argc - 1);
}
