/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:50:33 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/25 15:43:10 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			++j;
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		++i;
	}
	return (0);
}

int	main(void)
{
	char	str[100] = {"Hello world"};
	char	to_find[100] = {"world"};

	if (ft_strstr(str, to_find) == strstr(str, to_find))
		printf("%s\n", "true");
	else
		printf("%s\n", "false");
	return (0);
}
