/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 22:40:01 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/28 02:44:21 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (nb % i != 0)
		i++;
	if (i == nb)
		return (1);
	return (0);
}

int	main(void)
{
//	printf("%d\n", ft_is_prime(-1));
//	printf("%d\n", ft_is_prime(0));
//	printf("%d\n", ft_is_prime(1));
//	printf("%d\n", ft_is_prime(2));
//	printf("%d\n", ft_is_prime(7));
//	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(INT_MAX));
	return (0);
}
