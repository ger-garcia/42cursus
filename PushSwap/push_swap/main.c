/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:05:31 by gergarci          #+#    #+#             */
/*   Updated: 2024/05/28 18:05:57 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int nargs, char *args)
{
    t_list  *a;
    t_list  *b;

    a = NULL;
    b = NULL;
    if (nargs == 1 || (nargs == 2 && !args[1][0]))
        return(1);
    else if (nargs == 2)
        args = ft_split(args[1], ' ');
    ini_stack_a(&a, args + 1);
    if (!stack_sorted(a))
    {
        if (stack_len(a) == 2)
            sa(&a); //false
        else if (stack_len(a) == 3)
            sort_three(&a);
        else
            sort_stacks(&a, &b);
    }
    free_stack(&a);
    return (0);
}