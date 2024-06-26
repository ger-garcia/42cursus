/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_n_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 23:44:55 by gergarci          #+#    #+#             */
/*   Updated: 2024/06/26 06:59:43 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//first element becomes the last one
void	ft_rx(t_stack **a, char b, int j)
{
    t_stack *tmp;

    if (!*a || !(*a)->next)
        return ;
    tmp = *a;
    *a = ft_lstlast(*a);
    (*a)->next = tmp;
    *a = tmp ->next;
    tmp->next = NULL;
    if (j == 0 && b == 'a')
	    write(1, "ra\n", 3);
    else if (j == 0 && b == 'b')
	    write(1, "rb\n", 3);
}
void	ft_rr(t_stack **a, t_stack **b, int j)
{
    if (!*a || !(*a)->next || !*b || !(*b)->next)
        return ;
    ft_ra(a, 'a', 1);
    ft_rb(b, 'b', 1);
    if (j == 0)
	    write(1, "rr\n", 3);
}
//last element becomes the first one
void    ft_rrx(t_stack **a, char b, int j)
{
    t_stack *tmp;
    int     i;
    
    if (!a || !(*a)->next)
        return ;
    i = 0;
    tmp = *a;
    while ((*a)->next)
    {
        *a = (*a)->next;
        i++;
	}
    (*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (j == 0 && b == 'a')
		write(1, "rra\n", 4);
    else if (j == 0 && b == 'b')
        write(1, "rrb\n", 4);
}
void    ft_rrr(t_stack **a, t_stack **b, int j)
{
    if (!*a || !((*a)->next) || !*b || !((*b)->next))
        return ;
    ft_rrx(a, 'a', 1);
    ft_rrx(b, 'b', 1);
	if (j == 0)
		write(1, "rrr\n", 4);
}