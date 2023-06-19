/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:25:35 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/19 12:09:12 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] != '\0' && j <= nb - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int	main()
{
	unsigned int	n = 2;
	char	s1[100] = "Hello World";
	char	s2[] = "chad";
	printf("%s\n", ft_strncat(s1, s2, n));
	char    s3[100] = "Hello World";
    	char    s4[] = "chad";
	printf("%s", strncat(s3, s4, n));
}
