/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:20:51 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/17 21:21:38 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int *t, int qanak)
{
	int	i;
	int	is_valid;

	i = 1;
	is_valid = 1;
	while (i < qanak)
	{
		if (t[i - 1] >= t[i])
			is_valid = 0;
		i++;
	}
	if (is_valid)
	{
		i = 0;
		while (i < qanak)
			ft_putchar(t[i++] + '0');
		if (t[0] < (10 - qanak))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

int	ft_initial(int i)
{
	while (i < 10)
	{
		ft_putchar(i + '0');
		if (i != 9)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		i++;
	}
	return (i);
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[9];

	i = 0;
	if (n == 1)
		i = ft_initial(i);
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n > 1)
	{
		ft_print(tab, n);
		tab[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
