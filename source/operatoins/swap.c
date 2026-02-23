/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 21:51:04 by hsrour            #+#    #+#             */
/*   Updated: 2026/02/23 22:04:02 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void swap(t_stack *stack)
{
	t_node *f;
	t_node *s;

	f = stack->top;
	s = f->next;
	f->next = s->next;
	s->next = f;
	stack->top = s;
}

void	sa(t_push_swap *ps,int p)
{
	if(ps->stack_a->size < 2)
		return ;
	swap(ps->stack_a);
	if(p)
		ft_printf("sa\n");
	ps->operations++;
}

void	sb(t_push_swap *ps,int p)
{
	if(ps->stack_b->size < 2)
		return ;
	swap(ps->stack_b);
	if(p)
		ft_printf("sb\n");
	ps->operations++;
}

void	ss(t_push_swap *ps,int p)
{
	sa(ps,0);
	sb(ps,0);
	ft_printf("ss\n");
}
