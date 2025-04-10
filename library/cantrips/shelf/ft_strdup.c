/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarieux <mlarieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:57:48 by mlarieux          #+#    #+#             */
/*   Updated: 2025/04/11 00:14:56 by mlarieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlib.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = malloc((ft_strlen(s) + 1) * sizeof (char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, (ft_strlen(s) + 1));
	return (ptr);
}
