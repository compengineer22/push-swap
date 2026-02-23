/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 21:27:05 by hsrour            #+#    #+#             */
/*   Updated: 2026/02/23 21:50:50 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


static void push(t_stack *f,t_stack *t)
{
	t_node *node;

	if(f->size = 0)
		return;
	node = f->top;
	f->top = node->next;
	f->size--;
	node->next = t->top;
	t->top = node;
	t->size ++;
}

void	pa(t_push_swap *ps)
{
	if(ps->stack_b->size == 0)
		return;
	push(ps->stack_b,ps->stack_a);
	ft_printf("pa\n");
	ps->operations++;
}

void	pb(t_push_swap *ps)
{
	if(ps->stack_a->size == 0)
		return;
	push(ps->stack_a,ps->stack_b);
	ft_printf("pb\n");
	ps->operations++;
}
