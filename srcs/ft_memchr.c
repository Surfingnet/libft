/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 00:03:13 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/14 00:39:41 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const unsigned char	*s1;

	s1 = (const unsigned char *)s;
	i = 0;
	while (i < n && s1[i] != (unsigned char)c)
		i++;
	return (s1[i] == (unsigned char)c ? &(((void *)s1)[i]) : NULL);
}
