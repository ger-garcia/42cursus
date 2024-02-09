/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_pstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:18:00 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/09 17:18:06 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write_pstr(char *c, int len, int *ch_print)
{
	if (*ch_print == -1)
		return ;
	else if (write(1, c, len) < 0)
		*ch_print = -1;
	else
		*ch_print += len;
}
