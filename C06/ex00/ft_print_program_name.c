/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:08:39 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/28 21:22:33 by vkhlghat         ###   ########.fr       */
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
	char	c;

	argc = 0;
	c = '\n';
	ft_putstr(argv[argc]);
	write(1, &c, 1);
	return (0);
}
