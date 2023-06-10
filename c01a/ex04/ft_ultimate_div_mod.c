/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:22:09 by adenord           #+#    #+#             */
/*   Updated: 2023/06/08 12:01:33 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp2;

	temp = *a;
	temp2 = *b;
	*a = temp / temp2;
	*b = temp % temp2;
}
/*
int	main()
{
	int	a;
	int	b;

	a = 45;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("div = %d, mod = %d", a, b);
} */
