/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:45:24 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/03 00:49:10 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_check_mod(char mod, va_list args, int *ch_print)
{
	if (mod == 'c')
		ft_print_char(va_arg(args, int), ch_print);
	else if (mod == 's')
		ft_print_string(va_arg(args, char *),  ch_print);
	else if (mod == '%')
		*ch_print += write(1, "%", 1);
	else if (mod == 'd' || mod == 'i')
		ft_print_dec(va_arg(args, int), ch_print);
	/*else if (mod == 'u')
		ft_print_unsint(va_arg(args, int), ch_print);
	else if (mod == 'x' || mod == 'X')
		ft_print_hex(va_arg(args, int), mod, ch_print);
	else if (mod == 'p')
		ft_print_ptr(va_arg(args, int), ch_print);*/
}

/*	else if (c == 'p')
	{
		*printres += write(1, "0x", 2);
		print_ptr(va_arg(pargs, unsigned long), printres);
	}
*/

int	ft_printf(const char *str, ...)
{
	int		ch_print;
	va_list	lst_args;
	
	va_start(lst_args, str);
	ch_print = 0;
	while (*str != '\0' && ch_print >= 0)
	{
		if (*str != '%')
		{
			ft_putchar_fd(*str, 1);
			ch_print++;
		}
		else
		{
			if (ft_strchr("cspdiuxX%", *(str + 1)))
			{
				ft_check_mod(*(str + 1), lst_args, &ch_print);
				str++;
			}
		}
		if (*str != '\0')
			str++;
	}
	va_end(lst_args);
	return (ch_print);
}

int	main(void)
{
	printf("%d\n",ft_printf("Hola que tal %s\n", (char *)NULL));
	printf("%d\n",printf("Hola que tal %s\n", (char *)NULL));
	return (0);
}
