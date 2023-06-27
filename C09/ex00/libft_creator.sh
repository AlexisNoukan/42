# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 10:04:34 by anoukan           #+#    #+#              #
#    Updated: 2023/06/27 11:23:55 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/bash
touch	libft.a
echo "#ifndef LIBFT_A" > libft.a
echo "# define LIBFT_A" > libft.a


CC = gcc
FLAGS = -Wall -Wextra -Werror


