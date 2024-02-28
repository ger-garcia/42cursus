/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:50:45 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/09 17:54:48 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src_libft.h"

void	ft_print_char(char c, int *ch_print)
{
	if (*ch_print == -1)
		return ;
	else if (write(1, &c, 1) < 0)
		*ch_print = -1;
	else
		*ch_print += 1;
}
