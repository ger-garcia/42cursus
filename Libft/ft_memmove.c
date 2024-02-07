/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:21:20 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/16 15:00:50 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dtemp;
	char	*stemp;

	dtemp = (char *) dst;
	stemp = (char *) src;
	if (!dst && !src)
		return (0);
	else
	{
		if (dst <= src)
		{
			while (len--)
				*dtemp++ = *stemp++;
		}
		else if (dst > src)
		{
			dtemp += len -1;
			stemp += len -1;
			while (len--)
				*dtemp-- = *stemp--;
		}
		return (dst);
	}
}
