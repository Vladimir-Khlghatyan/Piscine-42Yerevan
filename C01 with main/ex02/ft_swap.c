/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 21:00:32 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/20 19:04:04 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int	*b)
{
	int	term;

	term = *a;
	*a = *b;
	*b = term;
}

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 8;
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
}
