/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarieux <mlarieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:28:55 by mlarieux          #+#    #+#             */
/*   Updated: 2025/04/11 00:14:56 by mlarieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlib.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*cuc1;
	const unsigned char	*cuc2;

	cuc1 = (unsigned char *)s1;
	cuc2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (cuc1[i] != cuc2[i])
		{
			return (cuc1[i] - cuc2[i]);
		}
		i++;
	}
	return (0);
}
