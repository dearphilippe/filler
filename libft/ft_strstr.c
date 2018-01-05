/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 10:25:09 by passef            #+#    #+#             */
/*   Updated: 2017/04/27 11:38:02 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int c;
	int i;
	int little_len;

	c = 0;
	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (big[c])
	{
		i = 0;
		while (little[i] == big[i + c])
		{
			if (i == little_len - 1)
				return ((char *)(big + c));
			i++;
		}
		c++;
	}
	return (0);
}
