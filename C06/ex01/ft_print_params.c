/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:32:33 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/28 21:26:59 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	c;

	i = 1;
	c = '\n';
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, &c, 1);
		i++;
	}
	return (0);
}
