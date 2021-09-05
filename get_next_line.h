/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:02:13 by gnuncio-          #+#    #+#             */
/*   Updated: 2021/09/05 00:55:30 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 1000

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>

char	*get_next_line(int fd);
int		ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *string, int c);
char	*ft_strjoin(char const *str1, char const *str2);
char	*ft_substr(char const *str, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dest_len);

#endif
