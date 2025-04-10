/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarieux <mlarieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:30:21 by mlarieux          #+#    #+#             */
/*   Updated: 2025/04/11 00:14:56 by mlarieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlib.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (start > ft_strlen(s))
	{
		res = ft_strdup("");
		return (res);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	res = malloc((len + 1) * sizeof (char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
