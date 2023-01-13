/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:27:33 by yuske             #+#    #+#             */
/*   Updated: 2023/01/13 23:35:07 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
// # include <limits.h>
// # include <string.h>
// # include <stdbool.h>
// # include <stdio.h>
// # include <errno.h>
// # include <stdint.h>

# define PF_SPECIFIERS "csdiuxXp%"
// # define DEC "0123456789"

typedef struct s_printf_tools
{
	int		len_print;
	char	specifier;
	char	*to_ascii;
	char	flag;
	size_t	figure;
	size_t	i;
}	t_pft;

int		ft_printf(const char *input, ...);
void	ft_putchar_plus(int additional_arg_c, t_pft *factor);
void	ft_putstr_plus(char *additional_arg_str, t_pft *factor);
void	ft_itoa_plus(int additional_arg_nbr, t_pft *factor);
void	ft_uitoa_plus(unsigned int additional_arg_nbr, t_pft *factor);
void	ft_uitox_plus(unsigned int additional_arg_nbr, t_pft *factor);
void	ft_uiptox_plus(uintptr_t additional_arg_nbr, t_pft *factor);

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int chr);
void	*ft_memset(void *str, int ch, size_t n);
void	ft_bzero(void *array, size_t n);
void	*ft_calloc(size_t nbr, size_t size);

#endif