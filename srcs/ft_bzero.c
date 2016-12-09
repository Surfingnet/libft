/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 11:26:00 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/09 11:49:16 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	if (n != 0)
	{
		str = (unsigned char*)s;
		while (n-- > 0)
			str[n - 1] = (unsigned char)'\0';
	}
}
