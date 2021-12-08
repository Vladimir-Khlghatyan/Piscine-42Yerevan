/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:57:13 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/27 23:54:31 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	if (nb < 0)
		return (0);
	i = 1;
	factorial = 1;
	while (i <= nb)
	{	
		factorial = factorial * i;
		i++;
	}
	return (factorial);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}
