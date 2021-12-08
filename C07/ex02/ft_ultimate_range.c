/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:24:19 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/11/01 22:02:30 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*numbers;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	numbers = (int *)malloc(sizeof(int) * (max - min));
	if (numbers == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		numbers[i] = min;
		i++;
		min++;
	}
	*range = numbers;
	return (i);
}
