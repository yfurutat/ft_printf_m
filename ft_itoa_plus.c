/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:37:07 by yuske             #+#    #+#             */
/*   Updated: 2022/12/27 03:24:13 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	figure_counter(long int from_integer, t_pft *tls);
static void		int_processor(long from_integer, t_pft *tls);

//18L recursive
void	ft_itoa_plus(int nbr, t_pft *tls)
{
	long	from_integer;
	int		sign;

	sign = 1;
	if (nbr < 0)
	{
		tls->flag = '-';
		sign *= -1;
	}
	from_integer = (long)nbr * sign;
	tls->figure = figure_counter(from_integer, tls);
	tls->to_ascii = (char *)ft_calloc(tls->figure + 1, sizeof(char));
	if (tls->to_ascii != NULL)
	{
		int_processor(from_integer, tls);
		ft_putstr_plus(tls->to_ascii, tls);
		free(tls->to_ascii);
	}
}

//13L
static size_t	figure_counter(long nbr, t_pft *tls)
{
	tls->i = 0;
	if (nbr == 0 || (nbr > 0 && tls->flag == '-'))
		tls->i += 1;
	while (nbr > 0)
	{
		nbr /= 10;
		tls->i += 1;
	}
	return (tls->i);
}

//8L
static void	int_processor(long from_integer, t_pft *tls)
{
	size_t	len;

	len = tls->figure;
	while (len > 0)
	{
		len -= 1;
		tls->to_ascii[len] = from_integer % 10 + '0';
		from_integer /= 10;
	}
	if (tls->flag == '-')
		tls->to_ascii[0] = '-';
}
