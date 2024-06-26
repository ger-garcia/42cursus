/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps_n_pushs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 23:43:43 by gergarci          #+#    #+#             */
/*   Updated: 2024/06/26 05:58:47 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(t_stack **a, int j)
{
    t_stack *tmp;
    
    if (!*a || !((*a)->next))
        return ;
    tmp = *a;
    *a = (*a)->next;
    tmp->next = (*a)->next;
    (*a)->next = tmp;
    if (j == 0)
        write(1, "sa\n", 3);
}

void    ft_sb(t_stack **b, int j)
{
    t_stack *tmp;
    
    if (!*b || !((*b)->next))
        return ;
    tmp = *b;
    *b = (*b)->next;
    tmp->next = (*b)->next;
    (*b)->next = tmp;
    if (j == 0)
        write(1, "sb\n", 3);
}

void    ft_ss(t_stack **a, t_stack **b, int j)
{
    if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
    ft_sa(a, 1);
    ft_sb(b, 1);
    if (j == 0)
        write(1, "ss\n", 3);
}

void	ft_pa(t_stack **a, t_stack **b, int j)
{
    t_stack *tmp;

    if(!b)
        return ;
    tmp = *a;
    *a = *b;
    *b = (*b)->next;
    (*a)->next = tmp;
    if (j == 0)
        write(1, "pa\n", 3);
}

void	ft_pb(t_stack **a, t_stack **b, int j)
{
    t_stack *tmp;

    if(!a)
        return ;
    tmp = *b;
    *b = *a;
    *a = (*a)->next;
    (*b)->next = tmp;
    if (j == 0)
        write(1, "pb\n", 3);
}
