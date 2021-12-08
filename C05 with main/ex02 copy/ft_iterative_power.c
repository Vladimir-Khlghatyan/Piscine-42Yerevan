/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:58:37 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/28 03:43:18 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 1)
		return (1);
	while (power > 1)
	{
		res = nb * res;
		power--;
	}
	return (res);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(-2, -2));
	printf("%d\n", ft_iterative_power(-2, 0));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 2));
	printf("%d\n", ft_iterative_power(1, 0));
	printf("%d\n", ft_iterative_power(-2, 3));
	printf("%d\n", ft_iterative_power( 2, 5));
	return (0);
}
