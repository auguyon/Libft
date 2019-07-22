/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:34:09 by auguyon           #+#    #+#             */
/*   Updated: 2018/11/17 14:23:23 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include <stdlib.h>

void	ft_memdel(void **ap)
{
	if (!ap)
		return ((void)0);
	if (*ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
