/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:56:21 by auguyon           #+#    #+#             */
/*   Updated: 2018/11/08 12:10:06 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;

	i = 0;
	while (dest[i])
		i++;
	while (n != 0 && *src)
	{
		dest[i++] = *src++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
