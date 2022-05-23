/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:03:58 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/05/19 15:03:35 by mmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;
	char	*p_pointer;
	size_t	counter;

	pointer = malloc(count * size);
	if (!pointer)
		return (NULL);
	counter = 0;
	p_pointer = (char *)pointer;
	while (counter < count * size)
	{
		p_pointer[counter] = '\0';
		counter++;
	}
	return (p_pointer);
}
