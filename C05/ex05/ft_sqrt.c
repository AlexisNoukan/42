/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:16:11 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/22 19:57:46 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(4));
	printf("%f", sqrt(4));
	return (0);
}*/
