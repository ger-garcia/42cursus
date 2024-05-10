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

char *append_buffer(char *big_buffer, char *read_buffer)
{
	char	*temp;
	
	temp = ft_strjoin(big_buffer, read_buffer);
	free(big_buffer);
	return (temp);
}

char *extract_line(char *big_buffer)
{
    char *new_line;
    int  i;

    if (!big_buffer)
        return (free(big_buffer), NULL);
    i = 0;
    while(big_buffer[i] != '\n' && big_buffer[i] != '\0')
        i++;
    new_line = ft_calloc(sizeof(char), i + 1);
    if (!new_line)
        return (NULL);
    i = 0;
    while(big_buffer[i] != '\n' && big_buffer[i] != '\0')
    {
        new_line[i] = big_buffer[i];
        i++;
    }
    return (new_line);
}

char *obtain_remaining(char *big_buffer)
{
    char *new_bigbuffer;
    int i;
    int j;

    if (!big_buffer)
        return (free(big_buffer), NULL);
    i = ft_strlen(big_buffer);
    j = 0;
    while (big_buffer[j] != '\n' && big_buffer[j] != '\0')
        j++;
    new_bigbuffer = ft_calloc(sizeof(char), i - j);
    i = 0;
    j++;
    while (big_buffer[j] != '\0')
        new_bigbuffer[i++] = big_buffer[j++];
    return (new_bigbuffer);
}

char *read_from_file(char *big_buffer, int fd)
{
    int bytes_read;
    char *tmp_buffer;

    static int count = 1;

    printf("#[%d]---", count++);
    tmp_buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
    if (!tmp_buffer)
        return (NULL);
    bytes_read = 1;
    while (bytes_read > 0)
    {
        bytes_read = read(fd, tmp_buffer, BUFFER_SIZE);
        if (bytes_read == -1)
            return (free(tmp_buffer), NULL);
        tmp_buffer[bytes_read] = '\0';
        big_buffer = append_buffer(big_buffer, tmp_buffer);
        if (ft_strchr(big_buffer, '\n'))
            break;
    }
    free(tmp_buffer);
    return (big_buffer);
}

char *get_next_line(int fd)
{
    static char *big_buffer;
    char *line;

    if (fd < 0 || read(fd, NULL, 0) < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    if (!big_buffer)
        big_buffer = ft_calloc(1, sizeof(char));
    if (!ft_strchr(big_buffer, '\n'))
        big_buffer = read_from_file(big_buffer, fd);
    if (!big_buffer)
        return (free(big_buffer), NULL);
    line = extract_line(big_buffer);
    big_buffer = obtain_remaining(big_buffer);
    return (line);
}

int main(void)
{
    int fd;
    char *line;
    int count;

    count = 0;
    fd = open("./txtfiles/new.txt", O_RDONLY);
//  fd = open("./txtfiles/probb.txt", O_RDONLY);
    
    if (fd == -1)
    {
        printf("Error opening file.");
        return (1);
    }
    while (1)
    {
        line = get_next_line(fd);
        if (line == NULL)
            break;
        count++;
        printf("[%d]:%s\n", count, line);
        free(line);
        line = NULL;
        if(count > 1)
            break;
    }
    close(fd);
    return (0);
}