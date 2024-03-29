/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:26:58 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/25 12:59:29 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	int		sep_length;
	int		i;
	int		total_sep_length;
	char	*result;

	total_length = 0;
	sep_length = ft_strlen(sep);
	i = 0;
	if (size <= 0)
		return (0);
	while (i < size)
		total_length += ft_strlen(strs[i++]);
	total_sep_length = (size - 1) * sep_length;
	result = (char *)malloc(total_length + total_sep_length + 1);
	if (result == 0)
		return (0);
	ft_strcat(result, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(result, sep);
		ft_strcat(result, strs[i++]);
	}
	return (result);
}
/*
int	main()
{
	char	*strs[] = {"Hello", "world", "from", "Alexis", "Noukan!"};
	char	*sep = "-";
	char	*result = ft_strjoin(5, strs, sep);
	printf("%s\n", result);
	free(result);
	return 0;
}*/
