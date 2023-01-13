/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 21:58:49 by yuske             #+#    #+#             */
/*   Updated: 2022/12/24 22:02:26 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *str, int chr)
{
	while (*str != (unsigned char)chr && *str)
		str++;
	if (*str != (unsigned char)chr)
		return (NULL);
	return ((char *)str);
}
