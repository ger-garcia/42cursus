/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:24:48 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/29 16:16:47 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_dig(long n)
{
	int	count;

	count = 0;
	if (n <= 9 && n >= 0)
		return (1);
	else if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		dig;
	long	n2;

	n2 = (long) n;
	dig = count_dig(n2);
	num = (char *) ft_calloc((dig + 1), sizeof(char));
	if (!num)
		return (NULL);
	if (n2 == 0)
		num[0] = '0';
	if (n2 < 0)
	{
		num[0] = '-';
		n2 *= -1;
	}
	dig--;
	while (n2 != 0)
	{
		num[dig] = (n2 % 10) + 48;
		dig--;
		n2 = n2 / 10;
	}
	return (num);
}
