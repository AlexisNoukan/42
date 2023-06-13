/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:23:18 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/13 13:24:06 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while(str[i] <= 'a' && str[i] <= 'z')
	{
		return (0);
		++i;
	}
	return (1);
}
int	main()
{
	char str[] = "Hello";
	int	resultat =  ft_str_is_alpha(str);
	printf("%d", resultat);

}
