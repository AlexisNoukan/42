# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 16:44:38 by anoukan           #+#    #+#              #
#    Updated: 2023/06/28 10:25:10 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/bash

CC=gcc 
CFLAGS="-Wall -Werror -Wextra" 
OUTPUT_LIB=libft.a; 
SRCS="$(dirname "${BASH_SOURCE[0]}")"/*.c; 
$CC $CFLAGS -c $SRCS && ar rc $OUTPUT_LIB *.o && ranlib $OUTPUT_LIB && rm -f *.o && echo "Library $OUTPUT_LIB created successfully."

