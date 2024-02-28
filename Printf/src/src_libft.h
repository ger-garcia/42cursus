/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_libft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:19:21 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/28 21:49:09 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRC_LIBFT_H
# define SRC_LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>

int		ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void	ft_write_pstr(char *c, int len, int *ch_print);
void	ft_print_char(char c, int *ch_print);
void	ft_print_string(char *str, int *ch_print);
int		ft_print_num(long num_in, int *ch_print, int is_uni);
int		ft_print_hex(unsigned int num_in, int *ch_print, int is_low);
int		ft_print_ptr(unsigned long num_in, int *ch_print);

#endif
