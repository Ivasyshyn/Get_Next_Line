/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivasysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 14:34:27 by sivasysh          #+#    #+#             */
/*   Updated: 2017/12/14 14:34:27 by sivasysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include <unistd.h>
# define BUFF_SIZE 32

typedef struct			s_fd_item
{
	char				*saved;
	int					fd;
	struct s_fd_item	*next;
}						t_fd_item;

int						get_next_line(const int fd, char **line);

#endif
