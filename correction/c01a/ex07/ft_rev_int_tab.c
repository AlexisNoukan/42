/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:25:43 by adenord           #+#    #+#             */
/*   Updated: 2023/06/09 10:01:05 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[(size - 1) - i]);
		i++;
	}
}
/*
int main()
{
	int tab[] = {67};
	int i = 0;
	while (i < 1)
		printf("%d, ", tab[i++]);
	ft_rev_int_tab(tab, 1);
	i = 0;
	printf("\n");
	while (i < 1)
		printf("%d, ", tab[i++]);
} */
