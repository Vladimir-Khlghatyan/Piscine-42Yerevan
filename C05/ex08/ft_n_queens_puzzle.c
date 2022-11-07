/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_queens_puzzle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:45:37 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/11/07 29:15:01 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_free(char **board, char *message, int message_length)
{
	int	i;

	if (message)
		write(2, message, message_length);
	if (!board)
		return (1);
	i = -1;
	while (board[++i])
		free(board[i]);
	free(board);
	return (1);
}

void	ft_print_board(char **board, int n)
{
	int		row;
	int		col;

	col = -1;
	while (++col < n)
	{
		row = -1;
		while (++row < n)
			if (board[row][col] == 'Q')
				printf("[%d]", row);
	}
	printf("\n");
}

int	ft_allowed_to_place_a_queen(char **board, int n, int row, int col)
{
	int	i;
	int	x;

	i = col;
	while (--i >= 0)
		if (board[row][i] == 'Q')
			return (0);
	i = col;
	x = row;
	while (--i >= 0 && ++x < n)
		if (board[x][i] == 'Q')
			return (0);
	i = col;
	x = row;
	while (--i >= 0 && --x >= 0)
		if (board[x][i] == 'Q')
			return (0);
	return (1);
}

int	ft_recursive_search(char **board, int n, int col, int *total_number)
{
	int	row;

	if (col == n)
	{
		ft_print_board(board, n);
		(*total_number)++;
	}
	row = -1;
	while (++row < n)
	{
		if (ft_allowed_to_place_a_queen(board, n, row, col))
		{
			board[row][col] = 'Q';
			ft_recursive_search(board, n, col + 1, total_number);
			board[row][col] = ' ';
		}
	}
	return (*total_number);
}

int	ft_n_queens_puzzle(int n)
{
	char	**board;
	int		total_number;
	int		i;
	int		j;

	board = (char **)malloc(sizeof(char *) * (n + 1));
	if (!board)
		exit(ft_free(board, "not enough memory to calculate!\n", 32));
	i = -1;
	while (++i < n)
	{
		board[i] = (char *)malloc(sizeof(char) * (n + 1));
		if (!board[i])
			exit(ft_free(board, "not enough memory to calculate!\n", 32));
		j = -1;
		while (++j < n)
			board[i][j] = ' ';
		board[i][j] = '\0';
	}
	board[i] = NULL;
	total_number = 0;
	total_number = ft_recursive_search(board, n, 0, &total_number);
	ft_free(board, NULL, 0);
	return (total_number);
}

int	main(int ac, char **av)
{
	int	n;

	if (ac < 2)
		return (printf("Please enter length of board as argument!\n"));
	if (ac > 2)
		return (printf("Too many arguments!\n"));
	n = atoi(av[1]);
	printf("Total number of solutions is %d\n", ft_n_queens_puzzle(n));
	return (0);
}
