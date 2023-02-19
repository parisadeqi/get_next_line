/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/22 11:47:45 by psadeghi      #+#    #+#                 */
/*   Updated: 2022/11/24 14:29:15 by psadeghi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*read_and_save(int fd, char *stash);
char	*find_char(char *str, char p);
char	*join_stash_and_buffer(char *stash, char *buffer);
size_t	ft_strlen(char *str);
char	*get_new_stash(char *stash);
char	*print_line(char	*stash);
char	*ft_substr_gnl(char	*s, unsigned int start, size_t	len);
char	*ft_strdup_gnl(char *str);

#endif