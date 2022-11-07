/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:45:37 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/11/07 29:15:01 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_board(char board[10][10])
{
	int		row;
	int		col;
	char	c;

	col = -1;
	while (++col < 10)
	{
		row = -1;
		while (++row < 10)
		{
			if (board[row][col] == 'Q')
			{
				c = row + '0';
				write(1, &c, 1);
			}
		}
	}
	write(1, "\n", 1);
}

int	ft_allowed_to_place_a_queen(char board[10][10], int row, int col)
{
	int	i;
	int	x;

	i = col;
	while (--i >= 0)
		if (board[row][i] == 'Q')
			return (0);
	i = col;
	x = row;
	while (--i >= 0 && ++x < 10)
		if (board[x][i] == 'Q')
			return (0);
	i = col;
	x = row;
	while (--i >= 0 && --x >= 0)
		if (board[x][i] == 'Q')
			return (0);
	return (1);
}

int	ft_recursive_search(char board[10][10], int col, int *total_number)
{
	int	row;

	if (col == 10)
	{
		ft_print_board(board);
		(*total_number)++;
	}
	row = -1;
	while (++row < 10)
	{
		if (ft_allowed_to_place_a_queen(board, row, col))
		{
			board[row][col] = 'Q';
			ft_recursive_search(board, col + 1, total_number);
			board[row][col] = ' ';
		}
	}
	return (*total_number);
}

int	ft_ten_queens_puzzle(void)
{
	char	board[10][10];
	int		total_number;

	return (ft_recursive_search(board, 0, &total_number));
}

int	main(void)
{
	printf("Total number of solutions is %d\n", ft_ten_queens_puzzle());
	return (0);
}
