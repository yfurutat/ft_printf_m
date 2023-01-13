/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uiptox_plus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:56:07 by yuske             #+#    #+#             */
/*   Updated: 2022/12/27 03:27:37 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	figure_counter_ptr(uintptr_t nbr, t_pft *tls);
static void		uintp_processor_hex(uintptr_t nbr, t_pft *tls);

//7L
void	ft_uiptox_plus(uintptr_t nbr, t_pft *tls)
{
	tls->len_print += write(1, "0x", 2);
	tls->figure = figure_counter_ptr(nbr, tls);
	tls->to_ascii = (char *)ft_calloc(tls->figure + 1, sizeof(char));
	if (tls->to_ascii != NULL)
	{
		uintp_processor_hex(nbr, tls);
		ft_putstr_plus(tls->to_ascii, tls);
		free(tls->to_ascii);
	}
}

//11L
static size_t	figure_counter_ptr(uintptr_t nbr, t_pft *tls)
{
	tls->i = 0;
	if (nbr == 0)
		tls->i = 1;
	while (nbr > 0)
	{
		nbr /= 16;
		tls->i += 1;
	}
	return (tls->i);
}

//23L
static void	uintp_processor_hex(uintptr_t nbr, t_pft *tls)
{
	size_t	divider;
	int		to_c;

	tls->i = 1;
	divider = 1;
	to_c = 0;
	while (tls->i < tls->figure)
	{
		divider *= 16;
		tls->i += 1;
	}
	tls->i = 0;
	while (tls->i < tls->figure)
	{
		to_c = nbr / divider % 16;
		if (to_c <= 9)
			tls->to_ascii[tls->i] = to_c + '0';
		else if (to_c > 9)
			tls->to_ascii[tls->i] = to_c + ('a' - 10);
		nbr %= divider;
		divider /= 16;
		tls->i += 1;
	}
}
