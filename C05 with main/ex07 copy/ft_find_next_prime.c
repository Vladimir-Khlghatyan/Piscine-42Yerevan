/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 23:00:53 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/28 02:57:13 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		while (ft_is_prime(nb) != 1)
			nb++;
	return (nb);
}

int	main(void)
{
//	printf("%d\n", ft_find_next_prime(-1));
//	printf("%d\n", ft_find_next_prime(0));
//	printf("%d\n", ft_find_next_prime(1));
//	printf("%d\n", ft_find_next_prime(2));
//	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(555872));
	printf("%d\n", ft_find_next_prime(INT_MAX));
	return (0);
}
