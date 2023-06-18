/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:49:24 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/18 17:13:41 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int resultat;

	i = 0;
	resultat = 0;
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			resultat = s1[i] - s2[i];
			return (resultat);
		}
		++i;
	}
	return (0);
}
int	main(void)
{
	int	n = 50;
	char s1[] = "";
	char s2[] = "";

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
}
