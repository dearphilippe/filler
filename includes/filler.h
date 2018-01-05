/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 15:03:57 by passef            #+#    #+#             */
/*   Updated: 2018/01/05 10:57:43 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
#define FILLER_H

#include "../libft/libft.h"
#include <string.h>

typedef struct s_read
{
	int len;
	int row;
	int col;
	char *line;
	char **board;
	struct s_env *next;
}t_read;

void	ft_reader();

#endif