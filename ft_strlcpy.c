/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:52:15 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/05/23 18:53:34 by mmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	size;
	size_t	counter;

	size = 0;
	counter = 0;
	while (src[size] != '\0')
		size++;
	if (dstsize == 0)
		return (size);
	while (counter < size && counter < dstsize - 1)
	{
		dst[counter] = src[counter];
		counter++;;
	}
	dst[counter] = '\0';
	return (size);
}
