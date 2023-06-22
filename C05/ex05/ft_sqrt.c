/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:16:11 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/22 21:58:01 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_sqrt(int nb)
{
	int	i;
	int j;

	i = 0;
	j = 1;
	while (nb > 0)
	{
		nb -= j;
		i++;
		j += 2;
	}
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (i);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(64));
	printf("%f", sqrt(64));
	return (0);
}
