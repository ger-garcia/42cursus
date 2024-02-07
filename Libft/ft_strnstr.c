/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:59:59 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/17 17:46:02 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (needle[x] == 0)
		return ((char *) haystack);
	while (haystack[x] != '\0' && x < len)
	{
		y = 0;
		while (haystack[x + y] == needle[y] && (x + y) < len)
		{
			y++;
			if (needle[y] == '\0')
				return ((char *) &haystack[x]);
		}
		x++;
	}
	return (NULL);
}
