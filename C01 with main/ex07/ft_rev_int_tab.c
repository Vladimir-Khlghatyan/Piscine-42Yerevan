/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:31:45 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/20 17:48:33 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	char	temp;
	int		i;

	i = -1;
	while (++i < --size)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + size);
		*(tab + size) = temp;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(tab, 5);
	printf("%d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
