/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 22:06:50 by hsrour            #+#    #+#             */
/*   Updated: 2026/02/23 22:34:05 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


static void rotate(t_stack *s)
{
	t_node *f;
	t_node *l;

	f = s->top;
	l = s->top;
	while(l->next)
		l = l->next;
	s->top = f->next;
	f->next = NULL;
	l->next = f;
}

void ra(t_push_swap *ps,int p)
{
	if(!ps || !ps->stack_a)
		return ;
	rotate(ps->stack_a);
	if(p)
		ft_printf("ra\n");
	ps->operations++;
}

void rb(t_push_swap *ps,int p)
{
	if(!ps || !ps->stack_b)
		return ;
	rotate(ps->stack_b);
	if(p)
		ft_printf("rb\n");
	ps->operations++;
}

void rr(t_push_swap *ps)
{
	if(!ps)
		return;
	ra(ps,0);
	rb(ps,0);
	ft_printf("rr\n");
}
