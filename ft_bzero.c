/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:59:21 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/05/13 12:21:48 by mmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*pointer;
	size_t	counter;

	pointer = (char *)s;
	counter = 0;
	while (counter < n)
	{
		*pointer = '\0';
		pointer++;
		counter++;
	}
}
