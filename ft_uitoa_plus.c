/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_plus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:37:07 by yuske             #+#    #+#             */
/*   Updated: 2022/12/27 03:25:32 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	figure_counter_uint(unsigned int nbr, t_pft *pft);
static void		uint_processor(unsigned int nbr, t_pft *pft);

//19L
void	ft_uitoa_plus(unsigned int nbr, t_pft *pft)
{
	pft->figure = figure_counter_uint(nbr, pft);
	pft->to_ascii = (char *)ft_calloc((pft->figure + 1), sizeof(char));
	if (pft->to_ascii != NULL)
	{
		uint_processor(nbr, pft);
		ft_putstr_plus(pft->to_ascii, pft);
		free(pft->to_ascii);
	}
}
	// return (len_print);

//11L
static size_t	figure_counter_uint(unsigned int nbr, t_pft *pft)
{
	pft->i = 0;
	if (nbr == 0)
		pft->i += 1;
	while (nbr > 0)
	{
		nbr /= 10;
		pft->i += 1;
	}
	return (pft->i);
}

static void	uint_processor(unsigned int nbr, t_pft *pft)
{
	size_t	len;

	len = pft->figure;
	while (len > 0)
	{
		len -= 1;
		pft->to_ascii[len] = nbr % 10 + '0';
		nbr /= 10;
	}
}
