/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitox_plus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:56:07 by yuske             #+#    #+#             */
/*   Updated: 2023/01/13 12:11:09 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	figure_counter_hex(unsigned int nbr, t_pft *pft);
static void		uint_processor_hex(unsigned int nbr, t_pft *pft);
static char		*ft_toupper_str(char *str);

//14L
void	ft_uitox_plus(unsigned int nbr, t_pft *pft)
{
	pft->figure = figure_counter_hex(nbr, pft);
	pft->to_ascii = (char *)ft_calloc(pft->figure + 1, sizeof(char));
	if (pft->to_ascii != NULL)
	{
		uint_processor_hex(nbr, pft);
		if (pft->specifier == 'X')
			ft_toupper_str(pft->to_ascii);
		ft_putstr_plus(pft->to_ascii, pft);
		free(pft->to_ascii);
	}
}

//11L
static size_t	figure_counter_hex(unsigned int nbr, t_pft *pft)
{
	pft->i = 0;
	if (nbr == 0)
		pft->i = 1;
	while (nbr > 0)
	{
		nbr /= 16;
		pft->i += 1;
	}
	return (pft->i);
}

//24L
static void	uint_processor_hex(unsigned int nbr, t_pft *pft)
{
	size_t	divider;
	int		to_c;

	pft->i = 1;
	divider = 1;
	to_c = 0;
	while (pft->i < pft->figure)
	{
		divider *= 16;
		pft->i += 1;
	}
	pft->i = 0;
	while (pft->i < pft->figure)
	{
		to_c = nbr / divider % 16;
		if (to_c <= 9)
			pft->to_ascii[pft->i] = to_c + '0';
		else if (to_c > 9)
			pft->to_ascii[pft->i] = to_c + ('a' - 10);
		nbr %= divider;
		divider /= 16;
		pft->i += 1;
	}
}

//7L
static char	*ft_toupper_str(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str += ('A' - 'a');
		str += 1;
	}
	return (str);
}
