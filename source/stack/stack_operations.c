/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 23:02:54 by hsrour            #+#    #+#             */
/*   Updated: 2026/02/23 23:10:07 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void push_to_stack(t_stack *s,t_node *node)
{
	if(!s || !node)
		return ;
	if(s->size == 0)
	{
		s->top = node;
		s->bottom = node;
		node->next = NULL;
		node->prev = NULL;
	}
	else
	{
		node->next = s->top;
		node->prev = NULL;
		s->top->prev = node;
		s->top = node;
	}
	s->size++;
}

t_node	*detach_top(t_stack *s)
{
	t_node *node;

	if(!s || s->size == 0)
		return;
	node = s->top;
	s->top = node->next;
	if(s->top)
		s->top->prev = NULL;
	else
		s->bottom = NULL;
	s->size--;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
