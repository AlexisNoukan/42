/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:11:08 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/19 15:11:00 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;
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
int	main()
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	printf("%s\n", ft_strstr(s1, s2));
	char    s3[] = "Hello";
    char    s4[] = "Hello";
	printf("%s", strstr(s3, s4));
}
