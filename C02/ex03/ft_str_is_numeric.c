/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:02:36 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/15 15:38:10 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9)' || (str[i] = "\0"))
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
	int	resultat =  ft_str_is_numeric(str);
	char str2[] = "hello";
    int resultat2 =  ft_str_is_numeric(str2);
	char str3[] = "";
    int resultat3 =  ft_str_is_numeric(str3);
	printf("%d", resultat);
	printf("%d", resultat2);
	printf("%d", resultat3);
}
