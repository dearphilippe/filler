/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 21:34:36 by passef            #+#    #+#             */
/*   Updated: 2018/01/01 22:47:11 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_memcpy_ch(char *dst, const char *src, char c, size_t pos)
{
	dst[pos] = src[pos];
	if (src[pos] == c)
		return (1);
	return (0);
}

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (ft_memcpy_ch((char *)dst, (char *)src, (char)c, i))
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
