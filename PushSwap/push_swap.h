/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:05:19 by gergarci          #+#    #+#             */
/*   Updated: 2024/06/20 04:20:58 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack
{
	long	nbr;
	long	index;
	struct	s_stack	*next;
	struct	s_stack	*prev;
	//bool			above_median;
	//bool			cheapest
	//struct s_stack	*target; 
}	t_stack;

//list == stack_node

// main.c

// utils.c
//int	ft_atoi(char *str, t_list **lst);

// swap.c
#endif
