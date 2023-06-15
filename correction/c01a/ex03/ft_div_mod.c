/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:48:19 by adenord           #+#    #+#             */
/*   Updated: 2023/06/08 11:19:38 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int div;
	int mod;

	div = 0;
	mod = 0;
	ft_div_mod(100, 3, &div, &mod);
	printf("div = %d, mod = %d\n", div, mod);
} */
