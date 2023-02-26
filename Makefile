# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agil-ord <agil-ord@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 19:28:38 by agil-ord          #+#    #+#              #
#    Updated: 2022/10/05 16:23:22 by agil-ord         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	=	ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_memset.c \
			ft_strchr.c ft_strlen.c ft_strrchr.c \
			ft_tolower.c ft_toupper.c ft_bzero.c ft_strncmp.c \
			ft_memcpy.c ft_memmove.c ft_memchr.c \
			ft_memcmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_split.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c 

B_SRCS	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

OBJS	=	${SRCS:.c=.o}

B_OBJS	=	${B_SRCS:.c=.o}

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -f

all: ${NAME}

${NAME}: ${OBJS}
			ar crs ${NAME} ${OBJS}
#%.o: %.c
			#${CC} -c ${CFLAGS} $< -o $@

bonus: 	${NAME} ${B_OBJS}
			ar crs ${NAME} ${OBJS} ${B_OBJS}


clean:		
				${RM} ${OBJS} ${B_OBJS}

fclean:		clean
						${RM} ${NAME} ${B_OBJS}


re:			fclean all

.PHONY: all clean fclean re	bonus