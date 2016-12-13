/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 16:57:11 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/13 18:08:33 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t			i;
	int			stop;

	s1 = (unsigned char *)dst;
	s2 = (const unsigned char *)src;
	i = 0;
	stop = 0;
	while (i < n && !stop)
	{
		stop = s2[i] == (unsigned char)c ? 1 : 0;
		s1[i] = s2[i];
		i++;
	}
	return (stop ? &s1[i] : NULL);
}
