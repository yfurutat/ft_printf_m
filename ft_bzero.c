/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:15:22 by yfurutat          #+#    #+#             */
/*   Updated: 2022/12/02 08:02:11 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//1.
void	ft_bzero(void *array, size_t n)
{
	ft_memset(array, '\0', n);
}

//3. 7L
// void	ft_bzero(void *array, size_t n)
// {
// 	size_t	i;
// 	char	*mem_caster;

// 	i = 0;
// 	mem_caster = (char *)array;
// 	while (i < n)
// 		mem_caster[i++] = 0;
// }
