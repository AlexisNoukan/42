/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 07:11:08 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/13 08:33:35 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcpy(char *dest,char *src)
{
	int	i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		++i;
	}
	return(dest);
}
int	main()
{
	char dest[14];
	char src[] = "Hello, World!";
	ft_strcpy(dest, src);
	printf("%s", ft_strcpy(dest, src));
}
