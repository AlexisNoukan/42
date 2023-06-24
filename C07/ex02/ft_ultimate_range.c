/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:31:37 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/24 19:25:48 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int *tab;

	if (min > max)
		return (0);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;	
	}
	*range = tab;
	return (i);
}

int main(){
    int **tab = malloc(sizeof(int**));
    int ret = ft_ultimate_range(tab, 10, 20);
    for (int i = 0; i < 10; i++)
        printf("t[%d] = %d\n", i, (*tab)[i]);
    printf("return = %d\n", ret);
    
}
