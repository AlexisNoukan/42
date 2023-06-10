/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:26:30 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/10 10:11:27 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char t)
{
	write(1, &t, 1);
}

void	ft_display(int o, int k, int l)
{
	ft_putchar(o);
	ft_putchar(k);
	ft_putchar(l);
	if(o != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	o;
	int	k;
	int	l;

	o = '0';
	k = '1';
	l = '2';
	while (o <= '7')
	{
		while (k <= '8')
		{
			while (l <= '9')
			{
				ft_display(o, k, l);
				l++ ;
			}
			l = ++k + 1;
		}
		k = ++o + 1;
		l=k+1;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
