/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:36:05 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/29 17:59:34 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	len;
	int	i;
	int	count;

	count = 0;
	if (s == 0)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	if (s)
	{
		i = 0;
		len = ft_strlen(s);
		while (i < len)
		{
			write(fd, &s[i++], 1);
			count++;
		}
	}
	return (count);
}
