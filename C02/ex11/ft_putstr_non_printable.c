/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:28:42 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/11/04 17:40:46 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexa(unsigned int n)
{
	unsigned int	index[16];
	int				i;

	if (n == 0)
		write(1, "0", 1);
	i = 0;
	while (n != 0)
	{
		index[i] = n % 16;
		n = n / 16;
		i++;
	}
	while (--i >= 0)
		write(1, &"0123456789abcdef"[index[i]], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	if (!str)
		return ;
	i = -1;
	while (str[++i])
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			write(1, "\\0", 2);
			ft_print_hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
	}
}
