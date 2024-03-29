/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:53:43 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/11/08 10:48:58 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*numbers;

	if (min >= max)
		return (NULL);
	numbers = (int *)malloc(sizeof(*numbers) * (max - min));
	i = -1;
	while (min < max)
		numbers[++i] = min++;
	return (numbers);
}
