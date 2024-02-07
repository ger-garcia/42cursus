/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:49:00 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/09 18:17:21 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int	main(void)
{
	char	ll;

	ll = 'd';
	printf("ft_isprint -> %d", ft_isprint(ll));
	//printf("isprint -> %d", isprint(ll));
	return (0);
}*/
