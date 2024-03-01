/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:09:50 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/29 21:10:17 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


void	*ft_calloc(size_t count, size_t size)
{
	void	        *memo;
    unsigned char   *memotmp;
	size_t	        howfull;

	howfull = count * size;
	memo = malloc(howfull);
	if (!memo)
		return (NULL);
    memotmp = (unsigned char *)memo;
    while (howfull)
    {
        *memotmp = '\0';
        howfull--;
        memotmp++;
    }
	ft_bzero(memo, howfull);
	return (memo);
}