/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:19:21 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/30 13:38:13 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>

int		ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void	ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_write_pstr(char *c, int len, int *ch_print);
void	ft_print_char(char c, int *ch_print);
void	ft_print_string(char *str, int *ch_print);
int		ft_print_num(long num_in, int *ch_print, int is_uni);

#endif
