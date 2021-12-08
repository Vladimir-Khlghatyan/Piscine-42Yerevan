/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 22:10:01 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/28 02:13:43 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <math.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	while ((x * x < nb) && (x <= 46340))
		x++;
	if (x * x == nb)
		return (x);
	return (0);
}

int	main(void)
{
//	printf("%d\n", ft_sqrt(-5));
//	printf("%d\n", ft_sqrt(0));
//	printf("%d\n", ft_sqrt(1));
//	printf("%d\n", ft_sqrt(2));
//	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(INT_MAX));
//	printf("%d\n", INT_MAX);
	return (0);
}
