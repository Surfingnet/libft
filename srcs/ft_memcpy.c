/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 11:55:24 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/10 12:58:56 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)dst;
	s2 = (const unsigned char *)src;
	i = -1;
	while (++i < n)
		s1[i] = (unsigned char)s2[i];
	return (dst);
}
