/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:02:43 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/05/19 15:29:51 by mmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	verify(const char *haystack, const char *needle, size_t len)
{
	while (*needle != '\0')
	{
		if (*haystack != *needle || len <= 0)
			return (0);
		haystack++;
		needle++;
		len--;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*pointer;
	size_t	counter;

	counter = 0;
	if (len == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && len > 0)
	{
		if (verify(haystack, needle, len))
		{
			pointer = (char *)haystack;
			return (pointer);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
