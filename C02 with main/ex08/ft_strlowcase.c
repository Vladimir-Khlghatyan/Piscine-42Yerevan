/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 00:56:47 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/24 15:15:26 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char	*str)
{
	int	i;
	int	p;

	i = 0;
	while (*(str + i))
	{
		p = (*(str + i) >= 'A' && *(str + i) <= 'Z');
		if (p)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = {"DHFdsfJsdJJJDs  XdfD15sLLds"};

	printf("%s", ft_strlowcase(str));
	return (0);
}
