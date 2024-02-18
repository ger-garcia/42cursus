/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:13:51 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/13 17:14:10 by gergarci         ###   ########.fr       */
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

int	ft_print_num(long num_in, int *ch_print, int is_uni)
{
	char	*num_out;
	int		i;
	int		len;

	if (is_uni)
		num_in = (unsigned int) num_in;
	len = count_dig(num_in);
	num_out = (char *) malloc(sizeof(char) * len);
	if (!num_out)
		return (*ch_print = -1);
	i = len - 1;
	if (num_in < 0)
	{
		num_out[0] = '-';
		num_in *= -1;
	}
	while (num_in > 0)
	{
		num_out[i] = (num_in % 10) + '0';
		num_in = num_in / 10;
		i--;
	}
	ft_write_pstr(num_out, len, ch_print);
	return (0);
}
