/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:39:54 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/24 13:12:29 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	f_line(int ix, int x)
{
	if (ix == 1)
		ft_putchar('A');
	else if (ix == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	m_line(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	l_line(int ix, int x)
{
	if (ix == 1)
		ft_putchar('C');
	else if (ix == x)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	ix;
	int	iy;

	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			if (iy == 1)
				f_line(ix, x);
			else if (iy < y)
				m_line(ix, x);
			else
				l_line(ix, x);
			ix++;
		}
		if (x > 0)
			ft_putchar('\n');
		iy++;
	}
}
