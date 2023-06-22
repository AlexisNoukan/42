/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:43:43 by anoukan           #+#    #+#             */
/*   Updated: 2023/06/21 12:39:52 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = argc - 1;
	while (j > 0 && argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			++i;
		}
		j--;
		write(1, "\n", 1);
	}
	return (0);
}