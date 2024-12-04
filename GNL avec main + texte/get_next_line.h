/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:17:42 by lmarck            #+#    #+#             */
/*   Updated: 2024/12/04 11:24:53 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stddef.h>
# include "stdio.h"
# include <fcntl.h>
# include <stdlib.h>

void	*ft_memset( void *pointer, int value, size_t count);
void	*ft_calloc(size_t nmemb, size_t size);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*new_read(char *buf, int fd, int nb_read, char *tmp);
char	*ft_join(char *buf, char *str);
char	*ft_strchr(const char *string, int searchedChar);
void	ft_bufleft(char *buf);
void	*ft_memmove( void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif
