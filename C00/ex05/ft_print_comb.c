/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 00:07:39 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/17 21:15:50 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	n[3];

	n[0] = '0';
	n[1] = '1';
	n[2] = '2';
	while (n[0] <= '7')
	{
		while (n[1] <= '8')
		{
			while (n[2] <= '9')
			{
				write(1, &n[0], 1);
				write(1, &n[1], 1);
				write(1, &n[2], 1);
				if (n[2]++ < '9' || n[1] < '8' || n[0] < '7')
					write(1, ", ", 2);
			}
			n[2] = ++n[1] + 1;
		}
		n[1] = ++n[0];
	}
}
