/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:17:57 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/31 14:58:44 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_char(char const *str, char const c)
{
	size_t	i;
	size_t	lenstr;

	if (!str)
		return (0);
	i = 0;
	lenstr = ft_strlen(str);
	while (i < lenstr)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimdstr;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (check_char(set, s1[start]))
		start++;
	while (start < end && check_char(set, s1[end - 1]))
		end--;
	trimdstr = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!trimdstr)
		return (NULL);
	i = 0;
	while (s1[start] != '\0' && start < end)
	{
		trimdstr[i] = s1[start];
		i++;
		start++;
	}
	trimdstr[i] = '\0';
	return (trimdstr);
}

/*int	main(void)
{
	char	*trim;

	trim = ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t");
	return (0);
}*/
