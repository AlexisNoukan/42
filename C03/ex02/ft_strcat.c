/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:14:24 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/18 20:53:13 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}
int	main()
{
	char	s1[100] = "Hello World";
	char	s2[] = "chad";
	printf("%s\n", ft_strcat(s1, s2));
	char    s3[100] = "Hello World";
    char    s4[] = "chad";
	printf("%s", strcat(s3, s4));
}
