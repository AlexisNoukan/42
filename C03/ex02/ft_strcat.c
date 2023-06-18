/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:14:24 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/18 18:19:06 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
		src[i] = dest[i];
		++i;
	}
	return (dest);
}
int	main(void)
{
	char	s1[] = "Hello World";
	char	s2[] = "chad";
	printf("%s",ft_strcat(s1, s2));
}
