/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 01:51:35 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/11/06 15:25:03 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	if (!str)
		return (str);
	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	c[3];

	if (!str)
		return (str);
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = -1;
	while (str[++i])
	{
		c[0] = ((str[i] <= 47) || (str[i] >= 58 && str[i] <= 64));
		c[1] = ((str[i] >= 91 && str[i] <= 96) || (str[i] >= 123));
		c[2] = (str[i + 1] >= 'a' && str[i + 1] <= 'z');
		if ((c[0] || c[1]) && c[2])
			str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
