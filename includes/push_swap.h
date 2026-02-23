/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 21:19:32 by hsrour            #+#    #+#             */
/*   Updated: 2026/02/23 23:41:15 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	int		size;
}			t_stack;

typedef enum e_strategy
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
}		t_strategy;

typedef struct s_push_swap
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	char		**operations;
	int			op_count;
	int			operation [11];
	double		disorder;
	t_strategy	strategy;
}				t_push_swap;

#endif

/*Parsing                  : */
/*Parse_args*/


/*Validate_input*/
void	validate_input(t_push_swap *ps);
int	is_valid_number(char *str);


/*operations                : */
/*Push*/
void	pa(t_push_swap *ps);
void	pb(t_push_swap *ps);
/*Swap*/
void	sa(t_push_swap *ps,int p);
void	sb(t_push_swap *ps,int p);
void	ss(t_push_swap *ps,int p);
/*Rotate*/
void ra(t_push_swap *ps,int p);
void rb(t_push_swap *ps,int p);
void rr(t_push_swap *ps);
/*Reverse_Rotate*/
void rra(t_push_swap *ps,int p);
void rrb(t_push_swap *ps,int p);
void rrr(t_push_swap *ps);

/*Utils 		             : */
/*is_sorted*/
int is_sorted(t_stack *s);
void	print_error(void);



/*Stack     :*/
/*Stack_operations*/
void push_to_stack(t_stack *s,t_node *node);
t_node	*detach_top(t_stack *s);
/*Stack_init*/
t_stack *init_stack(void);
t_node	*create_node(int value);
void	free_stack(t_stack *stack);
void	free_push_swap(t_push_swap *ps);
t_push_swap	*init_push_swap(void);
