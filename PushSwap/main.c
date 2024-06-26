/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:05:31 by gergarci          #+#    #+#             */
/*   Updated: 2024/06/20 05:23:26 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void exit_with_error(void)
{
    write(2,"Error\n", 6);
    exit(1);
}

//error_checker(argc, argv);
//exit_with_error();


int main(int nargs, char **args)
{
    t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;
    if (nargs == 1 || (nargs == 2 && !args[1][0]))
        return(1);
    else if (nargs == 2)
    {
        args = ft_split(args[1], ' ');
        ini_stack_a(&a, args);
    }
    else
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
