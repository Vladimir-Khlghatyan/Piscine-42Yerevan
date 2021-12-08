/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:06:57 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/20 18:42:52 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (size - 1 >= 0)
	{
		i = 0;
		while (i < size - 1)
		{	
			if (*(tab + i) > *(tab + i + 1))
			{	
				temp = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = temp;
			}
			i++;
		}
		size--;
	}
}

int	main(void)
{
	int	tab[] = {4, 3, 5, 1, 2, 10, 9, 7, -4, -5};

	ft_sort_int_tab(tab, 10);
	printf("%d %d %d %d %d %d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
	return (0);
}
