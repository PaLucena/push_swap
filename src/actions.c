/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:35:51 by palucena          #+#    #+#             */
/*   Updated: 2023/09/04 20:05:52 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * @brief Makes pa or pb
 * 
 * @param stack_to -> The stack from which you take the element
 * @param stack_from -> The stack in which you push the element
 * @param iden -> 'a' for pa, 'b' for pb
 */
void	ft_push(t_list **stack_to, t_list **stack_from, char iden)
{
	t_list	*tmp;

	if (stack_from)
	{
		tmp = *stack_from;
		*stack_from = (*stack_from)->next;
		if (!(*stack_to))
		{
			*stack_to = tmp;
			(*stack_to)->next = NULL;
		}
		else
		{
			tmp->next = *stack_to;
			*stack_to = tmp;
		}
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
void	ft_swap(t_list **a, t_list **b, char iden)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (iden == 'a' || iden == 's')
	{
		tmp1 = *a;
		tmp2 = (*a)->next;
		*a = tmp2;
		tmp1->next = tmp2->next;
		tmp2->next = tmp1;
	}
	if (iden == 'b' || iden == 's')
	{
		tmp1 = *b;
		tmp2 = (*b)->next;
		tmp2->next = tmp1;
		tmp2->next->next = (*b)->next->next;
		*b = tmp1;
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
void	ft_rotate(t_list **a, t_list **b, char iden)
{
	t_list	*tmp;

	if (iden == 'a' || iden == 'r')
	{
		tmp = *a;
		*a = (*a)->next;
		ft_lstlast(*a)->next = tmp;
		tmp->next = NULL;
	}
	if (iden == 'b' || iden == 'r')
	{
		tmp = *b;
		*b = (*b)->next;
		ft_lstlast(*b)->next = tmp;
		tmp->next = NULL;
	}
	ft_printf("r%c\n", iden);
}

void	ft_rr2(t_list **stack)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = ft_lstlast(*stack);
	tmp2 = *stack;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp2->next = NULL;
	tmp1->next = *stack;
	*stack = tmp1;
}

/**
 * @brief Makes rra, rrb or rrr
 * 
 * @param a -> Stack a
 * @param b -> Stack b
 * @param iden -> 'a' if rra, 'b' if rra, 'r' if rrr
 */
void	ft_reverse_rotate(t_list **a, t_list **b, int iden)
{
	if (iden == 'a' || iden == 'r')
		ft_rr2(a);
	if (iden == 'b' || iden == 'r')
		ft_rr2(b);
	ft_printf("rr%c\n", iden);
}
