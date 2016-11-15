/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:28:10 by aazri             #+#    #+#             */
/*   Updated: 2016/11/15 11:43:41 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char		*ft_itoa(int n)
{
	char	buff[22];
	char	*str;
	int		i;
	int		n_tmp;

	i = 0;
	n_tmp = n;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
		n_tmp = -n;
	while (n_tmp > 0)
	{
		buff[i++] = n_tmp % 10 + '0';
		n_tmp = n_tmp / 10;
	}
	if (n < 0)
		buff[i++] = '-';
	str = (char *)ft_memalloc(i + 1);
	if (n == 0)
		str[0] = '0';
	while (--i >= 0)
		str[n_tmp++] = buff[i];
	return (str);
}