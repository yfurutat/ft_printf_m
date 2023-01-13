/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:03:29 by yuske             #+#    #+#             */
/*   Updated: 2023/01/08 16:59:11 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc -pg -D BUFFER_SIZE=1000 main.c get_next_line.c get_next_line_utils.c &&
// ./a.out big_file.txt && gprof ./a.out
// gcc -pg -D BUFFER_SIZE=1000 main.c get_next_line.c get_next_line_utils.c &&
// ./a.out big_file.txt && gprof ./a.out

#include "ft_printf.h"

static void	initializer(t_pft *tools);
static void	input_processor(const char *input, va_list args, t_pft *tools);
static void	multi_converter(va_list args, t_pft *tools);

//23L
int	ft_printf(const char *input, ...)
{
	t_pft	*tools;
	va_list	args;
	int		len_rtn;

	len_rtn = 0;
	tools = ft_calloc(1, sizeof(t_pft));
	if (tools == NULL)
		return (-1);
	va_start(args, input);
	if (*input != '\0')
		input_processor(input, args, tools);
	va_end(args);
	len_rtn = tools->len_print;
	free(tools);
	return (len_rtn);
}
	// printf("\nlen_print: %d\n", tools->len_print);
	// tools->specifier = '\0';
	// tools->len_print = 0;
	// initializer(tools);
	// printf("\ninput: %s\n", input);
	// printf("\nlen_rtn: %d\n", len_rtn);
	// printf("\nlen_print: %d\n", tools->len_print);

static void	initializer(t_pft *tools)
{
	tools->specifier = '\0';
	tools->to_ascii = NULL;
	tools->flag = '\0';
	tools->figure = 0;
	tools->i = 0;
}

static void	input_processor(const char *input, va_list args, t_pft *tools)
{
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input += 1;
			initializer(tools);
			if (ft_strchr(PF_SPECIFIERS, *input))
			{
				tools->specifier = *input;
				multi_converter(args, tools);
			}
		}
		else
			ft_putchar_plus(*input, tools);
		input += 1;
	}
}

		// tools->len_print += write(1, "%", 1);
//17L
static void	multi_converter(va_list args, t_pft *tools)
{
	if (tools->specifier == '%')
		ft_putchar_plus(tools->specifier, tools);
	else if (tools->specifier == 'c')
		ft_putchar_plus(va_arg(args, int), tools);
	else if (tools->specifier == 's')
		ft_putstr_plus(va_arg(args, char *), tools);
	else if (tools->specifier == 'd' || tools->specifier == 'i')
		ft_itoa_plus(va_arg(args, int), tools);
	else if (tools->specifier == 'u')
		ft_uitoa_plus(va_arg(args, unsigned int), tools);
	else if (tools->specifier == 'x' || tools->specifier == 'X')
		ft_uitox_plus(va_arg(args, unsigned int), tools);
	else if (tools->specifier == 'p')
		ft_uiptox_plus(va_arg(args, uintptr_t), tools);
}
