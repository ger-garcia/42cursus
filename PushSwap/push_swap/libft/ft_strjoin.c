/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:46:52 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/22 17:16:41 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	s3 = (char *) malloc(sizeof(char) * (s1len + s2len + 1));
	if (!s3)
		return (NULL);
	ft_memcpy(s3, s1, s1len + 1);
	ft_strlcat(s3, s2, s1len + s2len + 1);
	return (s3);
}
