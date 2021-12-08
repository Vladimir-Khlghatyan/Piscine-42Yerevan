/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fi_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 23:56:05 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/17 00:00:49 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	c;

	c = n;
	if (n < 0)
		c = 78;
	else
		c = 80;
	write(1, &c, 1);
}

int	main(void)
{	
	ft_is_negative(-50);
	return (0);
}
