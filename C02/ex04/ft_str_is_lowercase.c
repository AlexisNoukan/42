/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:23:18 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/13 14:50:12 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {	if (str[i] <= 'a' && str[i] <= 'z')
		{
			return (1);
		}
        ++i;
    }
    return (0);
}
int	main()
{
	char str[] = "1234";
	int	resultat =  ft_str_is_lowercase(str);
	char str2[] = "hello";
    int resultat2 =  ft_str_is_lowercase(str2);
	char str3[] = "";
    int resultat3 =  ft_str_is_lowercase(str3);
	printf("%d", resultat);
	printf("%d", resultat2);
	printf("%d", resultat3);
}
