/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:35:51 by palucena          #+#    #+#             */
/*   Updated: 2023/09/02 22:47:22 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Makes pa or pb
 * 
 * @param a -> Stack a
 * @param b -> Stack b
 * @param iden -> 'a' if pa, 'b' if pb
 */
void	ft_push(t_list *a, t_list *b, char iden)
{
	if (iden == 'a' && b != NULL)
	{
		ft_lstadd_front(&a, b->data);
		ft_lstdelone(a, ft_delete);
		b = b->next;
	}
	if (iden == 'b' && a != NULL)
	{
		ft_lstadd_front(&b, a->data);
		ft_lstdelone(a, ft_delete);
		a = a->next;
	}
	ft_printf("p%c\n", iden);
}

/**
 * @brief Makes sa, sb or ss
 * 
 * @param a -> Stack a
 * @param b -> Stack b
 * @param iden -> 'a' if sa, 'b' if sb, 's' if ss
 */
void	ft_swap(t_list *a, t_list *b, char iden)
{
	int	tmp;

	if (iden == 'a' || iden == 's')
	{
		tmp = a->data;
		a->data = a->next->data;
		a->next->data = tmp;
	}
	if (iden == 'b' || iden == 's')
	{
		tmp = b->data;
		b->data = b->next->data;
		b->next->data = tmp;
	}
	ft_printf("s%c\n", iden);
}

/**
 * @brief Makes ra, rb or rr
 * 
 * @param a -> Stack a
 * @param b -> Stack b
 * @param iden -> 'a' if ra, 'b' if r, 'r' if rr
 */
void	ft_rotate(t_list *a, t_list *b, char iden)
{
	int	tmp;

	if (iden == 'a' || iden == 'r')
	{
		tmp = a->data;
		while (a->next != NULL)
		{
			a->data = a->next->data;
			a = a->next;
		}
		a->data = tmp;
	}
	if (iden == 'b' || iden == 'r')
	{
		tmp = b->data;
		while (b->next != NULL)
		{
			b->data = b->next->data;
			b = b->next;
		}
		b->data = tmp;
	}
	ft_printf("r%c\n", iden);
}

void	ft_rr2(t_list *stack)
{
	int	tmp1;
	int	tmp2;

	tmp1 = stack->data;
	stack->data = ft_lstlast(stack)->data;
	stack = stack->next;
	while (stack->next != NULL)
	{
		tmp2 = stack->data;
		stack->data = tmp1;
		tmp1 = tmp2;
		stack = stack->next;
	}
}

/**
 * @brief Makes rra, rrb or rrr
 * 
 * @param a -> Stack a
 * @param b -> Stack b
 * @param iden -> 'a' if rra, 'b' if rra, 'r' if rrr
 */
void	ft_reverse_rotate(t_list *a, t_list *b, int iden)
{
	int		tmp1;
	int		tmp2;

	if (iden == 'a' || iden == 'r')
		ft_rr2(a);
	if (iden == 'b' || iden == 'r')
		ft_rr2(b);
	ft_printf("rr%c\n", iden);
}
