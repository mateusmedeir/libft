/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:09:38 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/05/19 15:59:41 by mmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*pointer;
	int		counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	pointer = malloc((counter + 1) * sizeof(char));
	if (!pointer)
		return (NULL);
	counter = 0;
	while (s[counter] != '\0')
	{
		pointer[counter] = (*f)(counter, s[counter]);
		counter++;
	}
	pointer[counter] = '\0';
	return (pointer);
}
