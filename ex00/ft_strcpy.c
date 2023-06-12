/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:11:12 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/12 16:23:37 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char	*ft_strcpy(char *dest, char *src)
{
	*dest = *src;
	while(dest)
	{
		write(1, dest, 1);
		++dest;
	}
	return (0);
}
int	main()
{
	char	src[] = "Hello, world!";
	ft_strcpy(src);
}
