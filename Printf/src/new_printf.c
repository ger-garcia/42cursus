/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_printf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:19:51 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/08 15:20:03 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	check_character(char c, va_list pargs, int *printres)
{
	if (c == 'c')
		print_char(va_arg(pargs, int), printres);
	else if (c == 's')
		print_string(va_arg(pargs, char *), printres);
	else if (c == 'p')
	{
		*printres += write(1, "0x", 2);
		print_ptr(va_arg(pargs, unsigned long), printres);
	}
	else if (c == 'i' || c == 'd')
		print_int(va_arg(pargs, int), printres);
	else if (c == 'u')
		print_uns_int(va_arg(pargs, unsigned int), printres);
	else if (c == 'x')
		print_hexa(va_arg(pargs, unsigned int), printres, 0);
	else if (c == 'X')
		print_hexa(va_arg(pargs, unsigned int), printres, 1);
	else if (c == '%')
		*printres += write(1, "%", 1);
	else
		print_char(c, printres);
}

void	prot_write(char const *c, int len, int *printres)
{
	if (*printres == -1)
		return ;
	else if (write(1, c, len) < 0)
		*printres = -1;
	else
		*printres += len;
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		printres;
	va_list	pargs;

	i = 0;
	printres = 0;
	va_start(pargs, str);
	while (str[i] && printres >= 0)
	{
		if (str[i] == '%')
		{
			i++;
			check_character(str[i], pargs, &printres);
			i++;
		}
		if (str[i] != '%' && str[i] != '\0')
		{
			prot_write(&str[i], 1, &printres);
			i++;
		}
	}
	va_end(pargs);
	return (printres);
}
