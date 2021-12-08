/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 23:37:27 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/16 23:38:50 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i < 58)
	{
		write(1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
