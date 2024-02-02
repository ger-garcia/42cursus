/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 23:01:49 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/22 16:37:37 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1dup;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	s1dup = (char *) malloc(len * sizeof(char) + 1);
	if (!s1dup)
		return (NULL);
	while (s1[i] != '\0')
	{
		s1dup[i] = s1[i];
		i++;
	}
	s1dup[i] = '\0';
	return (s1dup);
}
