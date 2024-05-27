/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:58:50 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/26 20:23:51 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	words;
	size_t	l;
	int		tmp;

	l = 0;
	words = 0;
	while (s[l])
	{
		tmp = 0;
		if (s[l] != c)
		{
			while (s[l + tmp] != c && s[l + tmp])
				tmp++;
			words++;
			l += tmp;
		}
		else
			l++;
	}
	return (words);
}

static void	*ft_free_array(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static char	*ft_word_arrange(char const *str, char c, const char **pos)
{
	char	*newword;
	size_t	len_nword;
	size_t	i;

	len_nword = 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i + len_nword] && str[i + len_nword] != c)
		len_nword++;
	newword = ft_substr(str, i, len_nword);
	*pos += len_nword + i;
	return (newword);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;
	size_t	i_words;

	i_words = 0;
	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	array = (char **) ft_calloc(sizeof(char *), words + 1);
	if (!array)
		return (NULL);
	while (i_words < words)
	{
		array[i_words] = ft_word_arrange(s, c, &s);
		if (!array[i_words])
		{
			return (ft_free_array(array));
		}
		i_words++;
	}
	return (array);
}

/*int	main(void)
{
	char	**split;
	int		i;

	i = 0;
	split = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
	while(split[i][0] != '\0')
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}*/
