/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:22:35 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/19 16:22:11 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	int	i;

	i = 0;
	if (c >= 48 && c <= 57)
		i = 1;
	else if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		i = 1;
	else
		i = 0;
	return (i);
}

/*int	main(void)
{
	char	ll;

	ll = 'd';
	printf("ft_isalnum -> %d", ft_isalnum(ll));
	//printf("isalnum -> %d", isalnum(ll));
	return (0);
}*/
