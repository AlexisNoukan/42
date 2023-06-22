/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 08:28:26 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/22 19:58:31 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0 || nb == 1)
		return (1);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(4));
	return (0);
}*/
