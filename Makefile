# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 19:25:25 by esekouni          #+#    #+#              #
#    Updated: 2022/10/18 16:54:26 by esekouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror 

CC = gcc $(CFLAGS) -c 

SRC = ft_strlen.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_calloc.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

BSORC = ft_lstnew_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstmap_bonus.c

OBJS = $(SRC:.c=.o)

OBJSB = $(BSORC:.c=.o)

$(NAME) : $(OBJS)
		$(CC) $(SRC) -I.
		ar crs $(NAME) $(OBJS)

all: $(NAME)

bonus: $(NAME) $(OBJSB)
		ar cr $(NAME) $(OBJSB)
clean:
		rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME)

re: fclean all
