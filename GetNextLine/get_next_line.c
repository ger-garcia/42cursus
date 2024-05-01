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

// Function to convert and print the newline character as ? 

void    print_newline_helper(char *buffer)
{

    while (*buffer &&  *buffer != '\0')
    {
        if (*buffer == '\n') 
        {
            *buffer= '#';
        }
        printf("%c",*buffer);
        buffer++;
    }
}

// Function to read data from the file and append it to partial content.

static char *read_from_file(int fd)
{
    int bytes_read;
    char *cup_buffer;
    static int count = 1;

    printf("ft_calloc#[%d]---", count++);
    cup_buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
    if (cup_buffer == NULL)
        return (NULL);
    bytes_read = read(fd, cup_buffer, BUFFER_SIZE);
    print_newline_helper(cup_buffer);
    if (bytes_read <= 0)
        return (free(cup_buffer), NULL);
    return (cup_buffer);
}

// The get_next_line function to get the next line from the file descriptor.

char *get_next_line(int fd)
{
    char *basin_buffer;

    basin_buffer = read_from_file(fd);
    return(basin_buffer);
}

int main(void)
{
 int  fd;
 char *line;
 int  count;

 count = 0;
 fd = open("./txtfiles/new.txt", O_RDONLY);
 if (fd == -1)
 {
  printf("Error opening file");
  return (1);
 }
 while (1)
 {
  line = get_next_line(fd);
  if (line == NULL)
   break ;
  count++;
  printf("[%d]:%s\n", count, line);
  free(line);
  line = NULL;
 }
 printf("%d\n",BUFFER_SIZE);
 close(fd);
 return (0);
}