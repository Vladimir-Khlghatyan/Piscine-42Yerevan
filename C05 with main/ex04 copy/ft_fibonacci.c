/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 21:21:57 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/28 00:14:55 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	res;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}

int	main(void)
{
	int	index;

	index = 9;
	printf("%d\n", ft_fibonacci(index));
	return (0);
}
