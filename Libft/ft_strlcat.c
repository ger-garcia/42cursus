/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:44:36 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/16 17:34:38 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	i;
	size_t	finlen;

	dlen = 0;
	i = 0;
	finlen = 0;
	while (dst[dlen] != '\0')
		dlen++;
	while (src[finlen] != '\0')
		finlen++;
	if (dstsize <= dlen)
		finlen += dstsize;
	else
		finlen += dlen;
	while (src[i] != '\0' && (dlen + 1) < dstsize)
	{
		dst[dlen] = src[i];
		dlen++;
		i++;
	}
	dst[dlen] = '\0';
	return (finlen);
}
