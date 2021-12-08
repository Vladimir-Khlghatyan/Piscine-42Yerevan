/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 21:58:20 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/18 22:28:30 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	term_div;
	int	term_mod;

	term_div = *a / *b;
	term_mod = *a % *b;
	*a = term_div;
	*b = term_mod;
}

//int	main(void)
//{
//	int	a;
//	int	b;
//
//	a = 5;
//	b = 3;
//	ft_ultimate_div_mod(&a, &b);
//	printf("*a = %d, *b = %d\n", a, b);
//	return (0);
//}
