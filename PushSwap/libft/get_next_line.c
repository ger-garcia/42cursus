/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:08:45 by gergarci          #+#    #+#             */
/*   Updated: 2024/06/19 23:12:51 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*append_buffer(char *big_buffer, char *read_buffer)
{
	char	*temp;

	temp = ft_strjoin(big_buffer, read_buffer);
	if (!temp)
		return (free(big_buffer), NULL);
	return (free(big_buffer), temp);
}

char	*extract_line(char *big_buffer)
{
	char	*new_line;
	int		i;
	int		leni;

	if (!big_buffer)
		return (NULL);
	leni = 0;
	while (big_buffer[leni] != '\n' && big_buffer[leni] != '\0')
		leni++;
	if (big_buffer[leni] == '\n')
		leni++;
	new_line = ft_calloc(sizeof(char), leni + 1);
	if (!new_line)
		return (NULL);
	i = 0;
	while (i < leni)
	{
		new_line[i] = big_buffer[i];
		i++;
	}
	return (new_line);
}

char	*obtain_remaining(char *big_buffer)
{
	char	*new_bigbuffer;
	char	*og_bigbuffer;
	int		leni;
	int		j;

	if (!big_buffer)
		return (NULL);
	og_bigbuffer = big_buffer;
	while (*big_buffer != '\n' && *big_buffer != '\0')
		big_buffer++;
	if (*big_buffer == '\n')
		big_buffer++;
	leni = ft_strlen(big_buffer);
	new_bigbuffer = ft_calloc(sizeof(char), leni + 1);
	if (!new_bigbuffer)
		return (free(og_bigbuffer), NULL);
	j = 0;
	while (j < leni)
	{
		new_bigbuffer[j] = big_buffer[j];
		j++;
	}
	return (free(og_bigbuffer), new_bigbuffer);
}

char	*read_from_file(char *big_buffer, int fd)
{
	int		bytes_read;
	char	*tmp_buffer;

	tmp_buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!tmp_buffer)
		return (free(big_buffer), NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, tmp_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(big_buffer), free(tmp_buffer), NULL);
		else if (bytes_read == 0)
			return (free(tmp_buffer), tmp_buffer = NULL, big_buffer);
		tmp_buffer[bytes_read] = '\0';
		big_buffer = append_buffer(big_buffer, tmp_buffer);
		if (!big_buffer)
			return (free(tmp_buffer), NULL);
		if (ft_strchr(big_buffer, '\n'))
			break ;
	}
	return (free(tmp_buffer), tmp_buffer = NULL, big_buffer);
}

char	*get_next_line(int fd)
{
	static char	*big_buffer;
	char		*line;

	if (fd < 0 || read(fd, NULL, 0) < 0 || BUFFER_SIZE <= 0)
		return (free(big_buffer), big_buffer = NULL);
	if (!big_buffer)
		big_buffer = ft_calloc(1, sizeof(char));
	if (!big_buffer)
		return (NULL);
	if (!ft_strchr(big_buffer, '\n'))
		big_buffer = read_from_file(big_buffer, fd);
	if (!big_buffer || big_buffer[0] == '\0')
		return (free(big_buffer), big_buffer = NULL);
	line = extract_line(big_buffer);
	if (!line)
		return (free(big_buffer), big_buffer = NULL);
	big_buffer = obtain_remaining(big_buffer);
	if (!big_buffer)
		return (free(line), NULL);
	if (big_buffer[0] == '\0')
	{
		free(big_buffer);
		big_buffer = NULL;
	}
	return (line);
}

/*int main(void)
{
    int fd;
    char *line;
    int count;

    count = 0;
//  fd = open("./txtfiles/new.txt", O_RDONLY);
//	fd = open("./txtfiles/new.txt", O_RDONLY);
//	fd = open("./txtfiles/large.txt", O_RDONLY);
  fd = open("./txtfiles/one_jump.txt", O_RDONLY);
//	fd = open("./txtfiles/read_error.txt", O_RDONLY);
//	fd = open("./txtfiles/vacio.txt", O_RDONLY);

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
        //count++;
        printf("get_next_line:\n\"%s\"\n\n",line);
        free(line);
        line = NULL;
        //if(count > 1)
          //  break;
    }
    line = get_next_line(fd);
    close(fd);
    return (0);
}*/
