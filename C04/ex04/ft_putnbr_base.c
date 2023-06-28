/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 21:31:27 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/28 21:58:17 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *c)
{
    int i;

    i = 0;
    while (*c)
        i++;
    return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	temp;

	temp = 0;
	if (nbr >= 0 && nbr <= 9)
	{
		ft_putchar(nbr + '0');
	}
	else if (nbr < 0)
        {
                ft_putchar('-');
                ft_putnbr_base(nbr * -1);
        }
	else
	{
		ft_putnbr_base(nbr / ft_strlen(base));
		temp = nbr % ft_strlen(base);
		ft_putchar(base[temp]);
	}
}

int	main()
{
	ft_putnbr(14, "01");
}
