/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:12:37 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/23 20:40:07 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src_libft.h"

static int	count_dig_hex(unsigned long n)
{
	int	count;

	count = 0;
	if (n <= 15 && n >= 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

int	ft_print_ptr(unsigned long num_in, int *ch_print)
{
	char	*num_out;
	char	*hex_vals;
	int		i;

	hex_vals = "0123456789abcdef";
	num_out = (char *) malloc(sizeof(char) * (count_dig_hex(num_in) + 1));
	if (!num_out)
		return (*ch_print = -1);
	i = count_dig_hex(num_in);
	num_out[i--] = '\0';
	if (num_in == 0)
		num_out[i] = '0';
	while (num_in > 0)
	{
		num_out[i] = hex_vals[num_in % 16];
		num_in = num_in / 16;
		i--;
	}
	ft_write_pstr("0x", 2, ch_print);
	ft_write_pstr(num_out, ft_strlen(num_out), ch_print);
	free(num_out);
	return (0);
}
