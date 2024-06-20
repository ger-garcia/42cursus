/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:41:48 by gergarci          #+#    #+#             */
/*   Updated: 2024/06/19 22:44:05 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	let;
	int		pos;

	pos = 0;
	let = (char) c;
	while (s[pos] != '\0' && s[pos] != let)
		pos++;
	if (s[pos] == let)
		return ((char *) &s[pos]);
	return (0);
}
