# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 16:44:38 by anoukan           #+#    #+#              #
#    Updated: 2023/06/27 16:44:49 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# Compilation flags
CC=gcc
CFLAGS="-Wall -Wextra -Werror"

# Output file name
NAME=libft.a

# Source files
SRCS="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
OBJS=$(echo $SRCS | sed 's/\.c/\.o/g')

# Build rule
build_libft() {
    for file in $SRCS; do
        $CC $CFLAGS -c $file -o $(basename $file .c).o
    done

    ar rc $NAME $OBJS
    ranlib $NAME
}

clean() {
    rm -f $OBJS $NAME
}

# Command line argument handling
if [ $# -ne 1 ]; then
    echo "Usage: ./libft_creator.sh [build|clean]"
    exit 1
fi

case "$1" in
    "build")
        build_libft
        ;;
    "clean")
        clean
        ;;
    *)
        echo "Invalid argument. Usage: ./libft_creator.sh [build|clean]"
        exit 1
        ;;
esac

