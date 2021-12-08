/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:50:11 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/28 00:11:43 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(-2, -2));
	printf("%d\n", ft_recursive_power(-2, 0));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(0, 2));
	printf("%d\n", ft_recursive_power(1, 0));
	printf("%d\n", ft_recursive_power(-2, 3));
	printf("%d\n", ft_recursive_power(-2, 4));
	return (0);
}
