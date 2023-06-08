/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:26:30 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/08 13:33:26 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void    ft_print_comb(void)
{
    int o;
    int k;
    int l;
    
    o = '0';
    k = '1';
    l = '2';
    
    while (o <= ('6' + 1))
    {
        while (k <= ('7' + 1))
        {
            while (l <= ('8' + 1))
            {
                ft_display(o, k, l);
                l++ ; 
            }
            l = ++k ;
        }
        k = ++o ;
    }
}
void ft_putchar(char t)
{
    write(1, &t, 1);
}

void ft_display(int o, int k, int l)
{
    ft_putchar(o);
    ft_putchar(k);
    ft_putchar(l);
    ft_putchar(',');
    ft_putchar(' ');
}
