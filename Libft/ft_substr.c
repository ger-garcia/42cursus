/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:52:12 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/26 19:48:02 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = ft_strlen(s);
	if (start <= (unsigned int) i)
	{
		if (i - start < len)
			len = i - start;
		substr = (char *)malloc((len + 1) * sizeof(char));
		if (substr == NULL)
			return (NULL);
		i = 0;
		while (i < len)
		{
			substr[i] = s[i + start];
			i++;
		}
	}
	else
		return (ft_calloc(1, sizeof(char)));
	substr[i] = '\0';
	return (substr);
}
