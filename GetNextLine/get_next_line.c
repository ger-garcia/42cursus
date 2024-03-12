/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:08:45 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/29 21:09:31 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    int bytes_read;
    char *buffer;

    buffer = ft_calloc(3 + 1, sizeof(char));
    if (buffer == NULL)
        return (NULL);
    bytes_read = read(fd, buffer, 3);
    if (bytes_read <= 0)
        return (NULL);
    return (buffer);
}

int main(void)
{
    int fd; // la fuente
    char *next_line;
    int count;

    count = 0;
    fd = open("./txtfiles/large.txt", O_RDONLY);
    next_line = get_next_line(fd);
    count++;
    printf("[%d]:%s\n", count, next_line); // count is to show you the line numbers
    next_line = NULL;

    close(fd);
    return (0);
}