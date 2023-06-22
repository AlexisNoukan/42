/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:59:58 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/22 20:01:41 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(4, 4));
	return (0);
}*/
