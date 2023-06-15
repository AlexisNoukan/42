/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:54:51 by adenord           #+#    #+#             */
/*   Updated: 2023/06/08 15:56:49 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;

	i = 0;
	y = 1;
	while (i < size)
	{
		while (y < size)
		{
			if (tab[y] < tab[i])
				ft_swap(&tab[i], &tab[y]);
			y++;
		}
		i++;
		y = i + 1;
	}	
}
/*
int main()
{
	int tab[] = {23,456,2,42,-34,0,35,35,88};
	int i = 0;
	while (i < 9)
	{printf("%d, ", tab[i]);
	i++;}
	ft_sort_int_tab(tab, 9);
	printf("\n");
	i = 0;
	while (i < 9)
	{printf("%d, ", tab[i]);
	i++;}
} */
