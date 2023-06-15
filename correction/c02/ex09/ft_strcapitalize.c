/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:41:33 by gmillet           #+#    #+#             */
/*   Updated: 2023/06/14 08:24:07 by gmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] +  32;
		i++;
	}
	return (str);
}

char	*ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				   	|| (str[i] >= 'A' && str[i] <= 'Z')))
			return 0;
		i++;
	}
	return (1);
}

char	*ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		if (str[i] == 0)
			return (1);
		i++;
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[i] = str[i] - 32;
		if (!(ft_str_is_alpha(str)  && !(ft_str_is_numeric(str))))
			str[i] = str[i] + 32;
		i++;
	}
	//printf("%s", str);
	return (str);	
}
