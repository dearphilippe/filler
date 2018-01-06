/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 15:44:39 by passef            #+#    #+#             */
/*   Updated: 2018/01/05 15:14:41 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"
/*
**	Funtions allowed : 
	write
	malloc
	free
	read
	perror
	strerror
*/

int	main(void)
{
	int row;
	int col;
	char *line;
	char **board;

	char buffer[row][col];
	int count;

	count = 0;
	read(1, buffer, count);

	return (0);
}
