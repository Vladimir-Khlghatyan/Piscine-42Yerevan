/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:37:26 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/11/08 21:37:58 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_followed_by_new_line(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, (str + i), 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		else if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		++i;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*temp;
	int		replace;

	replace = 1;
	while (replace)
	{
		replace = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				replace = 1;
			}
		}
	}
	i = 0;
	while (++i < argc)
		ft_followed_by_new_line(argv[i]);
	return (0);
}
