/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:27:53 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/05/19 15:42:21 by mmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pointer;
	int		counter;

	counter = 0;
	pointer = malloc (sizeof(s1) + sizeof(s2) + 1);
	if (!pointer)
		return (NULL);
	counter = 0;
	while (*s1 != '\0')
	{
		pointer[counter] = *s1;
		counter++;
		s1++;
	}
	while (*s2 != '\0')
	{
		pointer[counter] = *s2;
		counter++;
		s2++;
	}
	pointer[counter] = '\0';
	return (pointer);
}
