/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:11:08 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/19 17:52:59 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	while (str[i])
	{
		n = i;
		j = 0;
		while (str[n] == to_find[j] && str[n] && to_find[j])
		{
			n++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}
/*int	main()
{
	char	s1[] = "Hello World";
	char	s2[] = "llo";
	printf("%s\n", ft_strstr(s1, s2));
	char    s3[] = "Hello World";
    char    s4[] = "llo";
	printf("%s", strstr(s3, s4));
}*/
