/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:57:12 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/19 19:22:39 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

//int	main(void)
//{
//	int	a;
//
//	a = ft_strlen("Hello my friend!");
//	printf("%d", a);
//	return (0);
/}
