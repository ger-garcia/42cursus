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
	/*else if (mod == 's')
		ft_putstring(va_arg(args, char *),  ch_print);
	else if (mod == '%')
		*ch_print += write(1, "%", 1);
	else if*/
}


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
			else
			{
				va_end(lst_args);
				return (ch_print);
			}
		}
		str++;
	}
	va_end(lst_args);
	return (ch_print);
}

int	main(void)
{
	//int	cc;
	//char e = 'e';
	//unsigned int custom = -25;
	//char *string = "Texto variado.";
	printf("\n%d",ft_printf("hola %c ue tal\n", 'q'));
	printf("\n%d",printf("hola %c ue tal\n", 'q'));
	//printf("\n%d",printf("hola%s ue tal\n", (char *)NULL));
	//printf("\n%u",custom);
	return (0);
}
