/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:36:53 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/17 13:21:48 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1temp;
	unsigned char	*s2temp;

	s1temp = (unsigned char *) s1;
	s2temp = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1temp[i] != '\0' && s1temp[i] == s2temp[i])
		i++;
	return (s1temp[i] - s2temp[i]);
}
