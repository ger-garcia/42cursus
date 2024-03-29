/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:54:44 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/15 17:25:41 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	l;

	l = (unsigned char) c;
	if (l >= 'A' && l <= 'Z')
		return (l + 32);
	else
		return (c);
}
