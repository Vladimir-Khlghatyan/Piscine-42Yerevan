/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:53:43 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/11/02 10:51:53 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*numbers;

	if (min >= max)
		return (NULL);
	numbers = (int *)malloc(sizeof(*numbers) * (max - min));
	i = 0;
	while (min < max)
	{
		numbers[i] = min;
		i++;
		min++;
	}
	return (numbers);
}

int	ft_atoi(char *str)
{
	int		i;
	int		nshan;
	int		tiv;

	i = 0;
	nshan = 1;
	tiv = 0;
	if (str[0] == '-')
	{
		nshan = -1;
		i = 1;
	}
	while (str[i])
	{
		tiv = (tiv * 10) + (str[i] - 48);
		i++;
	}
	return (tiv * nshan);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	min;
	int	max;
	int	*digits;

	min = 0;
	max = 0;
	if (argc <= 3)
	{
		min = ft_atoi(argv[1]);
		max = ft_atoi(argv[2]);
	}
	digits = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", digits[i]);
		i++;
	}
	printf("\n");
	printf("min %d\n", min);
	printf("max %d\n", max);
	printf("Q = %d\n", i);
	return (0);
}
