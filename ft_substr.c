/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:20:12 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/05/23 16:11:16 by mmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pointer;
	size_t	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	if (start >= len)
		len = 0;
	if (len > counter)
		pointer = malloc ((counter + 1) * sizeof(char));
	else
		pointer = malloc ((len + 1) * sizeof(char));
	if (!pointer)
		return (NULL);
	if (start >= counter)
		return (pointer);
	counter = 0;
	while (s[counter] != '\0' && counter < len)
	{
		pointer[counter] = s[counter + start];
		counter++;
	}
	pointer[counter] = '\0';
	return (pointer);
}
