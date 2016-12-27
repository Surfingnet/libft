/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 05:51:05 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/27 05:51:08 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(size + 1);
	if (!str || !size)
		return (NULL);
	while (str[i] && i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
