/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:20:51 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/17 21:22:28 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int *t, int count)
{
	int		i;
	int		is_valid;
	char	c;

	i = 1;
	is_valid = 1;
	while (i < count)
	{
		if (t[i - 1] >= t[i])
			is_valid = 0;
		i++;
	}
	if (is_valid)
	{
		i = 0;
		while (i < count)
		{
			c = t[i++] + '0';
			write(1, &c, 1);
		}
		if (t[0] < (10 - count))
			write(1, ", ", 2);
	}
}

int	ft_initial(int n)
{
	char	c;
	int		i;

	if (n != 1)
		return (0);
	i = -1;
	while (++i < 10)
	{
		c = i + '0';
		write(1, &c, 1);
		if (i != 9)
			write(1, ", ", 2);
	}
	return (i);
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[9];

	i = ft_initial(n);
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n > 1)
	{
		ft_print(tab, n);
		tab[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			if (tab[--i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}
