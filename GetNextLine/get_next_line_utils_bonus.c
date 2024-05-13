/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:28:36 by gergarci          #+#    #+#             */
/*   Updated: 2024/05/13 19:28:38 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*memo;
	unsigned char	*memotmp;
	size_t			howfull;

	howfull = count * size;
	memo = malloc(howfull);
	if (!memo)
		return (free(memo), memo = NULL, NULL);
	memotmp = (unsigned char *)memo;
	while (howfull)
	{
		*memotmp = '\0';
		howfull--;
		memotmp++;
	}
	return (memo);
}

char	*ft_strchr(const char *s, int c)
{
	char	let;
	int		pos;

	pos = 0;
	let = (char)c;
	while (s[pos] != '\0' && s[pos] != let)
		pos++;
	if (s[pos] == let)
		return ((char *)&s[pos]);
	return (0);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	s3 = ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s3[i + j] = s2[j];
		j++;
	}
	return (s3);
}
