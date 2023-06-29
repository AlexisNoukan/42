/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:05:07 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/19 16:12:27 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}
/*int	main()
{
	char s1[] = "Hello World!";
	printf("%d\n", ft_strlen(s1));
	printf("%lu",strlen(s1));
}*/
