/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:21:18 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/22 19:59:48 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (nb && power > i)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(-10, 4));
	printf("%d\n", ft_iterative_power(4, 0));
	printf("%d\n", ft_iterative_power(4, -4));
	printf("%d\n", ft_iterative_power(4, 4));
	printf("%d\n", ft_iterative_power(0, 4));
	printf("%d\n", ft_iterative_power(-4, 4));
	return (0);
}*/
