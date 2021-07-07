NAME	= libftprintf.a

INC		= .

SRCS	=	base/ft_printf.c \
			base/ft_read_format.c \
			base/ft_print_param.c \
			base/ft_choose_print_type.c \
			parser/ft_init_struct.c \
			parser/ft_parse_struct.c \
			parser/ft_parse_flags.c \
			parser/ft_parse_stars.c \
			parser/ft_parse_width.c \
			parser/ft_parse_precision.c \
			parser/ft_parse_type.c \
			ft_display_diuxxp/ft_start_print_diuxxp.c \
			ft_display_diuxxp/ft_correct_struct_diuxxp.c \
			ft_display_diuxxp/ft_print_diuxxp.c \
			ft_display_diuxxp/ft_set_nbr.c \
			ft_display_diuxxp/ft_set_len_nbr.c \
			ft_display_str/ft_correct_struct_str.c \
			ft_display_str/ft_start_print_str.c \
			ft_display_str/ft_print_str.c \
			ft_display_cpct/ft_correct_struct_cpct.c \
			ft_display_cpct/ft_start_print_cpct.c \
			ft_display_cpct/ft_print_cpct.c \
			utils/ft_atoi.c \
			utils/ft_sstrlen.c \
			utils/ft_putchar_base.c \
			utils/ft_print_nbr_base.c \
			utils/ft_print_symbol.c	\
			utils/ft_move_format.c	\
			utils/ft_type.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc
AR		= ar rc	
RANL	= ranlib

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I${INC} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS} ${INC}
			${AR} ${NAME} ${OBJS}
			${RANL} ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS} ${O_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re