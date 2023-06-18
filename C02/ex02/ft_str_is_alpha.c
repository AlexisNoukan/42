/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:47:35 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/18 14:26:07 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || \
				(str[i] >= 'a' && str[i] <= 'z')))
		{	
			return (0);
		}
	++i;
	}
	return (1);
}
/*int	main()
{
	char str[] = "hjgkjhgk1565kjhgy";	
	int	resultat =  ft_str_is_alpha(str);
	printf("%d", resultat);
	
}*/
