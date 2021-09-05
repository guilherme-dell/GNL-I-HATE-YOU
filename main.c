/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:10:12 by gnuncio-          #+#    #+#             */
/*   Updated: 2021/09/04 23:22:13 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char *txt;

	fd = open("doc.txt", O_RDONLY);

	txt = get_next_line(fd);
	printf("%s",txt);
	free(txt);

	txt = get_next_line(fd);
	printf("%s",txt);
	free(txt);
/*
	while ((txt = get_next_line(fd)) > 0)
	{
		printf("%s",txt);
		if (txt)
			free(txt);
		txt =  0;
	}
*/
	close(fd);
	return (0);
}
