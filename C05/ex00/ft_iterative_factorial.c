/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:57:13 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/27 23:55:58 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	if (nb < 0)
		return (0);
	i = 1;
	factorial = 1;
	while (i <= nb)
	{	
		factorial = factorial * i;
		i++;
	}
	return (factorial);
}
