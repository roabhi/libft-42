#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 15:28:04 by rabril-h          #+#    #+#              #
#    Updated: 2022/02/04 19:45:46 by rabril-h         ###   ########.bcn       #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_strdup.c \
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
		ft_putnbr_fd.c \

SRCBONUS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \


OBJ = $(SRC:%.c=%.o)

OBJBONUS = $(SRCBONUS:%.c=%.o)

FLAGS = -Wall -Werror -Wextra

.c.o: ${CC} ${FLAGS} -I libft.h -c ${<:.c =.o}

all: $(NAME)

$(NAME): ${OBJ} 
	@ar rcs $(NAME) $(OBJ)
	ranlib ${NAME}

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

bonus:  $(OBJ) $(OBJBONUS)
		@ar rcs $(NAME) $(OBJ) $(OBJBONUS)
		ranlib ${NAME}

re: fclean all


.PHONY: all clean fclean re bonus


