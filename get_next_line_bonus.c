/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:02:47 by sokhacha          #+#    #+#             */
/*   Updated: 2022/04/21 17:49:05 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	fun(int fd, char	**str)
{
	int			i;
	char		buf[BUFFER_SIZE + 1];

	i = 1;
	while (1)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == -1)
			return (0);
		buf[i] = '\0';
		if (!*str)
			*str = ft_strdup(buf);
		else
		   *str = ft_strjoin(*str, buf);
		if (ft_strchr(buf, '\n') || i == 0)
			break ;
	}
	return (1);
}

char	*get_next_line(int fd)
{
	static char	*str[OPEN_MAX];
	int			i;
	char		*line;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (fun(fd, &str[fd]) == 0)
		return (0);
	i = ft_strlen(str[fd]) - ft_strlen(ft_strchr(str[fd], '\n')) + 1;
	line = ft_substr(str[fd], 0, i);
	tmp = str[fd];
	str[fd] = ft_substr(str[fd], i, ft_strlen(str[fd]));
	free(tmp);
	return (line);
}
int main()
{
	int i;
	int fd1;
	int fd2;

	i = 4;
	fd1 = open("text.txt",O_RDONLY);
	fd2 = open("text.txt",O_RDONLY);
		while  (i != 0)
		{
			printf("%s",get_next_line(fd1));
			i--;

		
		}


}
