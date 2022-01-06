CFLAGS = -Wall -Wextra -Werror -g3

CC = clang

NAME = minishell

DIR_BUI = builtin/

DIR_EXE = execute/

DIR_LIS = list/

DIR_PAR = parsing/

DIR_PRO = program/

DIR_UTI = utils/

SRC_MAI = 	main.c

SRC_BUI =	ft_build_env.c\
			ft_builtin.c\
			ft_cd.c\
			ft_echo.c\
			ft_exit.c\
			ft_export.c\
			ft_get_env.c\
			ft_pwd.c\
			ft_unset.c

SRC_EXE = 	ft_check_path.c\
			ft_execve.c\
			ft_execve_in_pipe.c\
			ft_free_execve.c\
			ft_get_fd.c\
			ft_open.c\
			ft_piping.c

SRC_LIS =	ft_list_cmd.c\
			ft_list_cmd_utils.c\
			ft_list_env.c\
			ft_list_env_utils.c\
			ft_list_heredoc.c\
			ft_list_heredoc_utils.c

SRC_PAR =	ft_clean_cmdchar.c\
			ft_clean_quote.c\
			ft_heredoc.c\
			ft_is_dollar.c\
			ft_is_quoted.c\
			ft_parse_cmdline.c\
			ft_parse_dollar.c\
			ft_parse_error.c\
			ft_set_heredoc.c\
			ft_set_redir.c\
			ft_set_redir_tab.c\
			ft_split_pipe.c

SRC_PRO =	ft_prompt.c\
			ft_signal.c

SRC_UTI =	ft_atoi.c\
			ft_double_realloc.c\
			ft_is_ascii.c\
			ft_itoa.c\
			ft_memset.c\
			ft_safe_malloc.c\
			ft_split.c\
			ft_str.c\
			ft_str_copy.c

SRC = $(addprefix $(DIR_BUI), $(SRC_BUI)) $(addprefix $(DIR_EXE), $(SRC_EXE)) $(addprefix $(DIR_LIS), $(SRC_LIS)) $(addprefix $(DIR_PAR), $(SRC_PAR)) $(addprefix $(DIR_PRO), $(SRC_PRO)) $(addprefix $(DIR_UTI), $(SRC_UTI))

OBJ = $(SRC:.c=.o) $(SRC_MAI:.c=.o)
  # 	$(SRC_EXE:.c=.o) $(SRC_LIS:.c=.o) $(SRC_PAR:.c=.o) $(SRC_PRO:.c=.o) $(SRC_UTI:.c=.o) $(SRC_MAI:.c=.o)

#SRC = $(wildcard *.c)

#OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -lreadline

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

flemme: re
	make clean

.PHONY: clean fclean all re
