/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:32:28 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/18 16:48:58 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	resultat;

	i = 0;
	resultat = 0;
	while (s1[i] && s2[i])
	{
		if (s1 == s2)
		{
			resultat = 0;
			return (resultat);
		}
		if (s1 != s2)
		{
			resultat = s1[i] - s2[i];
			return (resultat);
		}
		++i;
	}
	return (0);
}
/*int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = "World";

	printf("%d\n", ft_strcmp(s1, s2));
}*/
