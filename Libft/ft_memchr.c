/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:56:41 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/17 15:20:50 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	kar;
	unsigned char	*stemp;
	int				pos;

	kar = (unsigned char) c;
	stemp = (unsigned char *) s;
	pos = 0;
	while (n--)
	{
		if (stemp[pos] == kar)
			return (&stemp[pos]);
		pos++;
	}
	return (0);
}
