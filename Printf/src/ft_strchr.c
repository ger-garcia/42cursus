/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:41:48 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/28 21:50:09 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src_libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	let;
	int		pos;

	pos = 0;
	let = (char) c;
	while (s[pos] != '\0')
	{
		if (s[pos] == let)
			return ((char *) &s[pos]);
		pos++;
	}
	if (let == '\0')
		return ((char *) &s[pos]);
	else
		return (0);
}
