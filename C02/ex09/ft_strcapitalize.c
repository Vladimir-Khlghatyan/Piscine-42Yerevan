/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 01:51:35 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/24 15:25:03 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcapitalize(char	*str)
{
	int	j;
	int	p1;
	int	p2;
	int	p3;

	ft_strlowcase(str);
	if ((*(str + 0) >= 'a') && (*(str + 0) <= 'z'))
		str[0] = str[0] - 32;
	j = 0;
	while (*(str + j))
	{
		p1 = (str[j] <= 47) || (str[j] >= 58 && str[j] <= 64);
		p2 = (str[j] >= 91 && str[j] <= 96) || (str[j] >= 123);
		p3 = ((*(str + j + 1) >= 'a') && (*(str + j + 1) <= 'z'));
		if ((p1 || p2) && p3)
			str[j + 1] = str[j + 1] - 32;
		j++;
	}
	return (str);
}
