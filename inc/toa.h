/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toa.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 19:52:58 by auguyon           #+#    #+#             */
/*   Updated: 2019/07/22 19:52:59 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOA_H
# define TOA_H

# include "str.h"
# include <string.h>

typedef struct		s_ftoa
{
	int				int_fl;
	int				int_fl_after;
	int				pui;
	int				i;
}					t_ftoa;

char				*ft_ftoa(float fl, int precision);
char				*ft_itoa(int n);
char				*ft_itoa_base(int n, int base);
char				*ft_itoa_base_caps(int n, int base);
char				*ft_lltoa(long long n);
char				*ft_lltoa_base(long long n, int base);
char				*ft_stoa(short n);
char				*ft_stoa_base(short n, int base);
char				*ft_ulltoa(unsigned long long n);
char				*ft_ulltoa_base(unsigned long long n, unsigned int base);
char				*ft_ulltoa_base_caps(unsigned long long n, unsigned int base);
char				*ft_ustoa(unsigned short n);
char				*ft_ustoa_base(unsigned short n, unsigned int base);
char				*ft_ustoa_base_caps(unsigned short n, unsigned int base);
char				*ft_utoa(unsigned int n);
char				*ft_utoa_base(unsigned int n, unsigned int base);
char				*ft_utoa_base_caps(unsigned int n, unsigned int base);
char				*ft_ztoa(size_t n);
char				*ft_ztoa_base(size_t n, unsigned int base);
char				*ft_ztoa_base_caps(size_t n, unsigned int base);

#endif