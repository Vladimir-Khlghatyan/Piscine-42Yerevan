/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 00:56:47 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/24 15:10:51 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char	*str)
{
	int	i;
	int	p;

	i = 0;
	while (*(str + i))
	{
		p = (*(str + i) >= 'a' && *(str + i) <= 'z');
		if (p)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = {"sfs dfD15sds"};

	printf("%s", ft_strupcase(str));
	return (0);
}
