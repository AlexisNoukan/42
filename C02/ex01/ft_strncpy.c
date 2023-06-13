/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:25:55 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/13 11:50:58 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int	n)
{
	int	i;

	i = 0;
	while	(src[i] && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while  (i < n)
	{
		dest[i] = '0';
		++i;
  	}

	return (dest);
}
int	main()
{
	char	dest[15];
	char	src[] = "Hello world";
	printf("%s", ft_strncpy(dest, src,15));
}
