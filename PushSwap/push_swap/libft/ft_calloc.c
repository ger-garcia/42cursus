/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 23:00:53 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/19 17:22:57 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memo;
	size_t	howfull;

	howfull = count * size;
	memo = malloc(howfull);
	if (!memo)
		return (NULL);
	ft_bzero(memo, howfull);
	return (memo);
}
