_SRCS_	=	printf\
			putchar_str\
			itoa_plus\
			uitoa_plus\
			uitox_plus\
			uiptox_plus\
			strlen\
			strchr\
			calloc\
			bzero\
			memset\
			
SRCS_	=	$(addprefix ft_, $(_SRCS_))
SRCS	=	$(addsuffix .c, $(SRCS_))
OBJS	=	$(SRCS:.c=.o)

NAME	=	libftprintf.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f
AR		=	ar -rcs
OUT		=	a.out
MAIN	=	main.c

$(NAME)	:	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all		:	$(NAME)
out		:	all
			$(CC) $(CFLAGS) $(NAME) $(MAIN) ; time ./$(OUT)
clean	:
			$(RM) $(OBJS)
fclean	:	clean
			$(RM) $(NAME)
oclean	:	fclean
			$(RM) $(OUT)
re		:	fclean all

norm	:	
			@norminette ft_printf.h $(SRCS)
normd	:
			@norminette -R CheckDefine ft_printf.h $(SRCS)
normf	:
			@norminette -R CheckForbiddenSourceHeader ft_printf.h $(SRCS)
commit	:	fclean
			git add .
			git commit -m "commit through Makefile"
			git log

.PHONY	:	all out clean fclean oclean re norm commit