/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 15:44:39 by passef            #+#    #+#             */
/*   Updated: 2018/01/05 11:23:42 by passef           ###   ########.fr       */
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

char	**alloc_board(int row, int col)
{
	char **board;
	
	board = malloc(sizeof(char*) * row);
	int i = 0;
	while (i < row)
	{
		// give memory to each row
		board[i] = malloc(sizeof(char) * col);
		i++;
	}
	return (board);
}

void	free_board(char **board, int row, int col)
{
	int i;

	i = 0;
	while (i < row)
	{
		free(board[i]);
		i++;
	}
	free(board);
}

void	print_board(char **board, int row, int col)
{
	/*
	**	print the board
	*/
	
	while(row)
	{
		ft_putstr(board[row]);
		row--;
	}
	while(col)
	{
		ft_putstr(board[col]);
		col--;
	}
}

void	parse_dimensions(char *line, int *row, int *col)
{
	
}

int	main(int ac, char **av)
{
	int		fd;
	char	*line;
	char	**board;
	int		row;
	int		col;
	
	if (ac == 2)
		fopen(av[1], "r+");
	else
		return (0);
	get_next_line(1, &line);
	parse_dimensions(line, &row, &col);
	// first line gives dimensions of the board
	// extract two numbers from this line (row, col)
	// after, you know how many rows and columns the board ha
	// allocate memory for the board
	board = alloc_board(row, col);

	// store the board from std-in, make it a function
	int i = 0;
	while (get_next_line(1, &line))
	{
		// store the line
		ft_strcpy(board[i], line);
		ft_putendl(line);
		free(line);
		// and go again
		i++;
	}

	// make your mmove and write your move to stdout
	board[1][1] = 'X';

	// free your board and you start again
	return (0);
}
