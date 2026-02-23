/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 22:33:10 by hsrour            #+#    #+#             */
/*   Updated: 2026/02/23 22:43:50 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


static void reverse_rotate(t_stack *s)
{
	t_node *second_l;
	t_node *l;

	if (s->size < 2)
		return;
	l = s->top;
	while(l->next)
	{
		second_l = l;
		l = l->next;
	}
	second_l->next = NULL;
	l->next = s->top;
	s->top = l;
}

void rra(t_push_swap *ps,int p)
{
	reverse_rotate(ps->stack_a);
	if(p)
		ft_printf("rra\n");
	ps->operations++;
}

void rrb(t_push_swap *ps,int p)
{
	reverse_rotate(ps->stack_b);
	if(p)
		ft_printf("rrb\n");
	ps->operations++;
}

void rrr(t_push_swap *ps)
{
	rra(ps,0);
	rrb(ps,0);
	ft_printf("rrr\n");
}
