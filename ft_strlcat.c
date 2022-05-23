/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:57:59 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/05/23 13:52:38 by mmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_counter;
	size_t	src_counter;
	size_t	size;

	dst_counter = 0;
	src_counter = 0;
	while (dst[dst_counter] != '\0')
		dst_counter++;
	while (src[src_counter] != '\0')
		src_counter++;
	if (dstsize == 0)
		return (src_counter);
	if (dstsize <= dst_counter)
		return (src_counter + dstsize);
	size = dst_counter + src_counter;
	while (*src != '\0' && dst_counter < dstsize - 1)
	{
		dst[dst_counter] = *src;
		dst_counter++;
		src++;
	}
	dst[dst_counter] = '\0';
	return (size);
}
