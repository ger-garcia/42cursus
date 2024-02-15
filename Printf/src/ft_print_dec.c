/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:13:51 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/13 17:14:10 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_print_dec(long num_in, int *chprint)
{
    char *num_out;
    int i;

    num_in
    if (num_in < 0 && num_in > -2147483648)

}


/*static void	print_num(int nb2, int fd2)
{+
	int		nums[10];
	int		i;
	char	printable;

	i = 0;
	while (nb2 > 0)
	{
		nums[i] = nb2 % 10;
		nb2 = nb2 / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		printable = nums[i] + 48;
		write(fd2, &printable, 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0 && n > -2147483648)
	{
		write(fd, "-", 1);
		print_num(n * -1, fd);
	}
	else if (n > 0 && n <= 2147483647)
		print_num(n, fd);
	else if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else
		write(fd, "0", 1);
}*/