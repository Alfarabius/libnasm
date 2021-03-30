/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosie <mrosie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:43:50 by mrosie            #+#    #+#             */
/*   Updated: 2021/03/30 17:03:55 by mrosie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main(void)
{
	char	*str;
	char	tmp[1024];
	char	tmp2[1];
	char	file_content[1024];
	char	buf[1024];
	int		fd;
	int		bwr;
	char *str1 = "1232";
	char *err_msg;

	fd = open("./read.txt", O_RDWR);
	if (!fd)
		return (1);
	str = "Hello, World!\0ddddddddddddd";
	printf(MAG);
	printf("________LIBASM_________\n");
	printf(RED);
	ft_write(1, "\"", 1);
	ft_write(1, str, ft_strlen(str));
	ft_write(1, "\"", 1);
	printf(" - is our string!$\n");
	printf(GREEN);
	printf("length of our string is: %zu$\n", ft_strlen(str));
	printf(YELLOW);
	bwr = ft_read(fd, file_content, 1024);
	printf("bytse was read from read.txt: %d$\n", bwr);
	printf("FILE read.txt content readed by _ft_read:$\n")
	;
	ft_write(1, file_content, bwr - 1);
	printf(WHITE);
	fd = open("./not_exist.txt", O_RDWR);
	bwr = ft_read(fd, buf, 256);
	printf("\nreturn of ft_read: %d\n", bwr);
	err_msg = strerror(errno);
	printf("\nft_read: %s\n", err_msg);
	bwr = read(fd, buf, 256);
	printf("return of read: %d\n", bwr);
	err_msg = strerror(errno);
	printf("\nread: %s\n", err_msg);
	ft_write(-1, "ft_write", 8);
	err_msg = strerror(errno);
	printf("\nft_write: %s\n", err_msg);
	write(-1, "ft_write", 8);
	err_msg = strerror(errno);
	printf("\nwrite: %s\n", err_msg);
	printf(RED);
	printf("\nresult of compare 0:            %d$\n", ft_strcmp("HELLO", "HELLO"));
	printf("result of compare 1:            %d$\n", ft_strcmp("HELLO1", "HELLO"));
	printf("result of compare 2:            %d$\n", ft_strcmp("HELLO", "bye"));
	printf("result of compare 3:            %d$\n", ft_strcmp("", ""));
	printf("result of compare 4:            %d$\n", ft_strcmp("", "bye"));
	printf("result of compare 5:            %d$\n", ft_strcmp("HELLO", ""));
	printf("result of compare 7:            %d$\n", ft_strcmp("1232", "1236"));
	printf("result of compare 8:            %d$\n", ft_strcmp("\200", "\0"));
	printf("\nresult of compare 0 (original): %d$\n", strcmp("HELLO", "HELLO"));
	printf("result of compare 1 (original): %d$\n", strcmp("HELLO1", "HELLO"));
	printf("result of compare 2 (original): %d$\n", strcmp("HELLO", "bye"));
	printf("result of compare 3 (original): %d$\n", strcmp("", ""));
	printf("result of compare 4 (original): %d$\n", strcmp("", "bye"));
	printf("result of compare 5 (original): %d$\n", strcmp("HELLO", ""));
	printf("result of compare 7 (original): %d$\n", strcmp("1232", "1236"));
	printf("result of compare 8 (original): %d$\n", strcmp("\200", "\0"));
	ft_strcpy(file_content, str);
	printf("\n%s$\n", file_content);
	strcpy(tmp, str);
	printf("%s$\n", tmp);
	printf(CYN);
	str = ft_strdup("result of my ft_strdup");
	printf("\n%s$\n", str);
	str = ft_strdup("");
	printf("\n%s$\n", str);
	str = ft_strdup(str1);
	printf("\n%s$\n", str);
	return (0);
}
