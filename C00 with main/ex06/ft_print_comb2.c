/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 00:20:40 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/17 21:17:51 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num2(int a, int b, int c, int d)
{
	if ((a * 10 + b) < (c * 10 + d))
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if (a < '9' || b < '8' || c < '9' || d < '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_for_while(int a, int b, int c, int d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_print_num2(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			d = '0';
			c = '0';
			b++;
		}
		d = '0';
		c = '0';
		b = '0';
		a++;
	}	
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_for_while(a, b, c, d);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
