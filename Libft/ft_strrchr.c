/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:12:15 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/16 18:18:22 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	let;
	int		pos;

	pos = 0;
	let = (char) c;
	while (s[pos] != '\0')
		pos++;
	if (c == '\0')
		return ((char *) &s[pos]);
	while (pos >= 0)
	{
		if (s[pos] == let)
			return ((char *) &s[pos]);
		pos--;
	}
	return (0);
}
