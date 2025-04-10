/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_dtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarieux <mlarieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:04:21 by mlarieux          #+#    #+#             */
/*   Updated: 2025/04/11 00:14:56 by mlarieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlib.h"
#include <stdio.h>

void	free_dtab(char **dtab)
{
	int	i;

	i = 0;
	if (!dtab)
		return ;
	while (dtab && dtab[i] && dtab[i] != NULL)
	{
		free(dtab[i]);
		i++;
	}
	free(dtab);
}
