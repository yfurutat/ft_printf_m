/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:35:53 by yfurutat          #+#    #+#             */
/*   Updated: 2022/12/27 03:31:23 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_plus(int chr, t_pft *tls)
{
	tls->len_print += write(1, &chr, 1);
}

void	ft_putstr_plus(char *str, t_pft *tls)
{
	if (str == NULL)
		tls->len_print += write(1, "(null)", 6);
	else
		tls->len_print += write(1, str, ft_strlen(str));
}
