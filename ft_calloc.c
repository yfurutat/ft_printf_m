/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:46:07 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/30 19:19:33 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//after calloc, make sure to free allocated memory heap in main
//need we free if allocation is failed?
	//if (mem_sum >= SIZE_MAX || nbr > SIZE_MAX / 10 || size > SIZE_MAX / 10)
	//->size_maxを超えると、値が裏返って戻るので、きちんと反応しない。
	//->nbr > SIZE_MAX / size
	//->nbr, sizeどちらかが、size_max をもう一方で割った数より大きければ成立。
//11L
void	*ft_calloc(size_t nbr, size_t size)
{
	void	*mem;

	if (nbr == 0 || size == 0)
		ft_calloc(1, 1);
	else if (nbr > SIZE_MAX / size)
		return (NULL);
	mem = malloc(nbr * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, nbr * size);
	return (mem);
}
