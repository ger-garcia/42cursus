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

int	ft_printf(const char *str, ...)
{
	int		*chrs_print;
	va_list	lst_args; //variable que nos permite recorrer la variadica
	
	va_start(lst_args, str); //le anadimos la variable listable y la fija (str)
	chrs_print[0] = 0;

	while (*str != '\0')
	{
		if (*str != '%')
		{
			ft_putchar_fd(*str, 1);
			chrs_print[0]++;
			printf("%d",chrs_print[0]);
		}
		else
		{
			if (ft_strchr("cspdiuxX%", *(str + 1)))
			{
				//ft_check(*(str + 1),lst_args);
				if (*(str + 1) == 'c')
				{
					chrs_print[0] += (va_arg(lst_args, int), 1);
					str++;
				}
				else if (*(str + 1) == 's')
				{
					chrs_print[0] += ft_putstr_fd(va_arg(lst_args, char *), 1);
				}
				// else if (*(str + 1) == 'p'){}
				// else if (*(str + 1) == 'd'){}
				// else if (*(str + 1) == 'i'){}
				// else if (*(str + 1) == 'u'){}
				// else if (*(str + 1) == 'x'){}
				// else if (*(str + 1) == 'X'){}
				else if (*(str + 1) == '%')
					ft_putchar_fd('%', 1);
					str++;
			}
			else
			{
				va_end(lst_args);
				return (chrs_print[0]); //Anade sino break
			}
		}
		str++;
	}
	va_end(lst_args);
	return (chrs_print[0]);
}



/*FUNCION QUE MIRE QUE COMANDO ES
	va_arg(parametros, char *); //string
	va_arg(parametros, char); //un caracter
	va_arg(parametros, int); //un entero
	va_arg(parametros,

	proteger los write, los fuckin leaks*/

int	main(void)
{
	//int	cc;
	//char e = 'e';
	//unsigned int custom = -25;
	//char *string = "Texto variado.";
	printf("\n%d",ft_printf("hola%s ue tal\n", (char *)NULL), "prueba");
	printf("\n%d",printf("hola%s ue tal\n", (char *)NULL), "prueba");
	//printf("\n%u",custom);
	return (0);
}
