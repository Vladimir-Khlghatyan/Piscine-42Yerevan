/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:07:18 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/24 14:52:17 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int	i;
	int	p1;
	int	p2;

	i = 0;
	if (!*(str + i))
		return (1);
	while (*(str + i))
	{
		p1 = (*(str + i) >= 'A' && *(str + i) <= 'Z');
		p2 = (*(str + i) >= 'a' && *(str + i) <= 'z');
		if (!(p1 || p2))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = {"asd54324"};

	printf("%d", ft_str_is_alpha(str));
	return (0);
}
