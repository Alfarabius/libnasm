/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosie <mrosie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:43:50 by mrosie            #+#    #+#             */
/*   Updated: 2021/03/24 19:02:29 by mrosie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main(void)
{
	char	*str;
	char	file_content[1024];
	int		fd;
	int		bwr;

	fd = open("./read.txt", O_RDWR);
	if (!fd)
		return (1);
	str = "Hello, World!";
	printf(MAG);
	printf("________LIBASM_________\n");
	;
	printf(RED);
	ft_write(1, "\"", 1);
	ft_write(1, str, ft_strlen(str));
	ft_write(1, "\"", 1);
	printf(" - is our string!\n");
	printf(GREEN);
	printf("length of our string is: %zu\n", ft_strlen(str));
	printf(YELLOW);
	bwr = ft_read(fd, file_content, 1024);
	printf("bytse was read from read.txt: %d\n", bwr);
	printf("FILE read.txt content readed by _ft_read:\n")
	;
	ft_write(1, file_content, bwr - 1);
	printf(RED);
	printf("\nresult of compare 1: %d\n", ft_strcmp("HELLO", "HELLO"));
	printf("result of compare 2: %d\n", ft_strcmp("HELLO", "bye"));
	printf("result of compare 3: %d\n", ft_strcmp("", ""));
	printf("result of compare 4: %d\n", ft_strcmp("", "bye"));
	printf("result of compare 5: %d\n", ft_strcmp("HELLO", ""));
	return (0);
}
