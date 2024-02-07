/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:19:16 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/16 14:56:34 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dtemp;
	unsigned char	*stemp;

	if (!dst && !src)
		return (0);
	else
	{
		dtemp = (unsigned char *) dst;
		stemp = (unsigned char *) src;
		while (n--)
			*dtemp++ = *stemp++;
		return (dst);
	}
}
