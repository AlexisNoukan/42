/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:32:28 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/20 13:27:01 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		++i;
	}
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
	char	s1[] = "Helloooo";
	char	s2[] = "Hello";


	printf("%d\n", ft_strcmp(s1, s2));
}i*/
