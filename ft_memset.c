/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:25:00 by yfurutat          #+#    #+#             */
/*   Updated: 2022/12/02 15:48:20 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//11L
void	*ft_memset(void *array, int chr, size_t n)
{
	unsigned char	*mem_caster;
	size_t			i;

	mem_caster = (unsigned char *)array;
	i = 0;
	while (i < n)
	{
		mem_caster[i] = (unsigned char)chr;
		i += 1;
	}
	return (mem_caster);
}
