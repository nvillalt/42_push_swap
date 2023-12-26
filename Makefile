# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 11:15:22 by nvillalt          #+#    #+#              #
#    Updated: 2023/12/26 20:11:18 by nvillalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#···················#
#		NAME		#
#···················#

NAME = push_swap

BONUS = checker

#···················#
#		PATH		#
#···················#

OBJ_PATH = obj/

SRC_PATH = src/

INC_PATH = inc/

BONUS_OBJ_PATH = bonus_obj/

BONUS_SRC_PATH = bonus/

#···················#
#	   COMPILER		#
#···················#

CC = gcc

CFLAGS = -Wall -Wextra  -g #-Werror

CFLAGS += -I $(INC_PATH) -I $(LIBFT_DIR) -I $(SRC_PATH)


#···················#
#		SRCS		#
#···················#

SRCS = main.c parse_init.c parse_utils.c print_list.c list_utils.c  \
	list_utils_2.c movements_sp.c movements_rr.c sort_algorithm.c sort_three.c \
	sort_more.c sort_utils.c sort_utils_2.c algorithm_movements.c \
	sort_hundred.c parse_check_len.c

BONUS_SRCS = main_bonus.c parse_init_bonus.c list_utils_bonus.c list_utils_2_bonus.c \
	movements_rr_bonus.c movements_sp_bonus.c parse_check_len_bonus.c parse_init_utils_bonus.c \
	get_commands.c execute_commands_bonus.c gnl_bonus.c

OBJ_NAME = $(SRCS:%.c=%.o)

BONUS_OBJ_NAME = $(BONUS_SRCS:%.c=%.o)

OBJS = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

BONUS_OBJS = $(addprefix $(BONUS_OBJ_PATH)/, $(BONUS_OBJ_NAME))

#···················#
#		  RM		#
#···················#

RM = rm -rf

#···················#
#	   LIBFT		#
#···················#

LIBFT_DIR = libft
# search for .a in current directory
LDFLAGS = -L $(LIBFT_DIR)
# lib name
LDLIBS = -lft


#···················#
#		RULES		#
#···················#

.PHONY: all re clean fclean debug bonus

all: $(NAME)

$(NAME): $(OBJS)
	make -sC $(LIBFT_DIR)
	$(CC) $^ -o $@ $(CFLAGS) $(LDFLAGS) $(LDLIBS)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS): | $(OBJ_PATH)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

debug: CFLAGS += -fsanitize=address -g3
debug: $(BONUS)

bonus: $(BONUS)

$(BONUS): $(BONUS_OBJS)
	make -sC $(LIBFT_DIR)
	$(CC) $^ -o $@ $(CFLAGS) $(LDFLAGS) $(LDLIBS)

$(BONUS_OBJ_PATH)/%.o: $(BONUS_SRC_PATH)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BONUS_OBJS): | $(BONUS_OBJ_PATH)

$(BONUS_OBJ_PATH):
	mkdir -p $(BONUS_OBJ_PATH)

clean:
	make fclean -sC $(LIBFT_DIR)
	$(RM) $(OBJ_PATH)
	$(RM) $(BONUS_OBJ_PATH)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(BONUS)
	
re: fclean all