/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:41:52 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/13 12:42:24 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_string(char *str, int *ch_print)
{
	if (!str)
	{
		write(1, "(null)", 6);
		*ch_print += 6;
	}
	else if (str)
		ft_write_pstr(str, ft_strlen(str), ch_print);
}
