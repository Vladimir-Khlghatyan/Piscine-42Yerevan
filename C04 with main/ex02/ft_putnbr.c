/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:48:02 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/25 18:20:25 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int nb)
{
	int	x;

	x = nb;
	if (x < 0)
	{
		ft_putchar('-');
		if (x == -2147483648)
		{
			ft_putchar('2');
			x = 147483648;
		}
		else
			x = -x;
	}
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
		ft_putchar(x + '0');
}
