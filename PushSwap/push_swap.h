/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:05:19 by gergarci          #+#    #+#             */
/*   Updated: 2024/05/28 18:28:39 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stddef.h>
# include <stdbool.h>

typedef struct s_list
{
	int				content;
	int				index;
	int				cost;
	//bool			above_median;
	//bool			cheapest
	struct s_list	*target;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

//list == stack_node

// main.c

// utils.c
//int	ft_atoi(char *str, t_list **lst);

// swap.c
#endif
